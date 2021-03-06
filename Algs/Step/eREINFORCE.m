%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Reference: www.scholarpedia.org/article/Policy_gradient_methods
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [dJdtheta, stepsize] = eREINFORCE(policy, data, gamma, robj, lrate)

dlp = policy.dlogPidtheta;
dJdtheta = zeros(dlp,1);

totstep = 0;

num_trials = max(size(data));
parfor trial = 1 : num_trials
	sumrew = 0;
	sumdlogPi = zeros(dlp,1);
	
	for step = 1 : size(data(trial).a,2)
		sumdlogPi = sumdlogPi + ...
			policy.dlogPidtheta(data(trial).s(:,step), data(trial).a(:,step));
		sumrew = sumrew + gamma^(step-1) * data(trial).r(robj, step);
        totstep = totstep + 1;
	end
	dJdtheta = dJdtheta + sumdlogPi * sumrew;
end

if gamma == 1
    dJdtheta = dJdtheta / totstep;
else
    dJdtheta = dJdtheta / num_trials;
end

if nargin >= 5
    T = eye(length(dJdtheta)); % trasformation in Euclidean space
    lambda = sqrt(dJdtheta' * T * dJdtheta / (4 * lrate));
    lambda = max(lambda,1e-8); % to avoid numerical problems
    stepsize = 1 / (2 * lambda);
end