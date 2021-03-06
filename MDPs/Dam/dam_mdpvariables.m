function mdp_vars = dam_mdpvariables()
% Reference: Castelletti et al, Tree-based fitted q-iteration for MOMDP
% (2013)

dim = 2;
mdp_vars.nvar_state = 1;
mdp_vars.nvar_action = 1;
mdp_vars.nvar_reward = dim;
mdp_vars.gamma = 1;
mdp_vars.isAvg = 1;
mdp_vars.isStochastic = 1; % random init state and random inflow
mdp_vars.maxr = [20;20;2;1];
mdp_vars.maxr = mdp_vars.maxr(1:dim);

% 1 to penalize the policy when it violates the problem's constraints
mdp_vars.penalize = 0;

return
