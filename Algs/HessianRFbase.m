function h = HessianRFbase(policy, data, gamma, robj)

dlp = policy.dlogPidtheta;
hlp = policy.hlogPidtheta;
h = zeros(hlp, hlp);

% Compute optimal baseline
num_trials = max(size(data));
bnum = zeros(hlp,hlp);
bden = zeros(hlp,hlp);
parfor trial = 1 : num_trials
    sumrew = 0;
    sumhlogPi = zeros(hlp,hlp);
    sumdlogPi = zeros(dlp,1);
    
    for step = 1 : size(data(trial).a,2)
        sumdlogPi = sumdlogPi + ...
            policy.dlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumhlogPi = sumhlogPi + ...
            policy.hlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumrew = sumrew + gamma^(step-1) * data(trial).r(robj,step);
    end
    bnum = bnum + (sumdlogPi * sumdlogPi' + sumhlogPi).^2 * sumrew;
    bden = bden + (sumdlogPi * sumdlogPi' + sumhlogPi).^2;
end
b = bnum ./ bden;

% Compute hessian
parfor trial = 1 : num_trials
    sumrew = 0;
    sumhlogPi = zeros(hlp,hlp);
    sumdlogPi = zeros(dlp,1);
    for step = 1 : max(size(data(trial).a))
        dlogpidtheta = policy.dlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumdlogPi = sumdlogPi + dlogpidtheta;
        hlogpidtheta = policy.hlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumhlogPi = sumhlogPi + hlogpidtheta;
        sumrew = sumrew + gamma^(step-1) * data(trial).r(robj,step);
    end
    h = h + (sumrew - b) .* (sumdlogPi * sumdlogPi' + sumhlogPi);
end

h = h / num_trials;

end