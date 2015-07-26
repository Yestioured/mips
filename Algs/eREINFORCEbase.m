%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Reference: www.scholarpedia.org/article/Policy_gradient_methods
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [dJdtheta, stepsize] = eREINFORCEbase(policy, data, gamma, robj, lrate)

dlp = policy.dlogPidtheta;
dJdtheta = zeros(dlp,1);

% Compute optimal baseline
num_trials = max(size(data));
bnum = zeros(dlp,1);
bden = zeros(dlp,1);
parfor trial = 1 : num_trials
    sumrew = 0;
    sumdlogPi = zeros(dlp,1);
    
    for step = 1 : size(data(trial).a,2)
        sumdlogPi = sumdlogPi + ...
            policy.dlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumrew = sumrew + gamma^(step-1) * data(trial).r(robj,step);
    end
    
    sumdlogPi = sumdlogPi .* sumdlogPi;
    bnum = bnum + sumdlogPi * sumrew;
    bden = bden + sumdlogPi;
end
b = bnum ./ bden;

% Compute gradient
parfor trial = 1 : num_trials
    sumrew = 0;
    sumdlogPi = zeros(dlp,1);
    
    for step = 1 : size(data(trial).a,2)
        sumdlogPi = sumdlogPi + ...
            policy.dlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
        sumrew = sumrew + gamma^(step-1) * data(trial).r(robj, step);
    end
    dJdtheta = dJdtheta + sumdlogPi .* (ones(dlp, 1) * sumrew - b);
end

dJdtheta = dJdtheta / num_trials;

if nargin >= 5
    T = eye(length(dJdtheta)); % trasformation in Euclidean space
    lambda = sqrt(dJdtheta' * T * dJdtheta / (4 * lrate));
    lambda = max(lambda,1e-8); % to avoid numerical problems
    stepsize = 1 / (2 * lambda);
end
