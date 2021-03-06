function mdp_vars = resource_mdpvariables()
% Reference: Vamplew et al, Empirical evaluation methods for multiobjective 
% reinforcement learning algorithms (2011)

mdp_vars.nvar_state = 4;
mdp_vars.nvar_action = 1;
mdp_vars.nvar_reward = 3;
mdp_vars.action_list = [1,2,3,4];
mdp_vars.gamma = 1;
mdp_vars.isAvg = 1;
mdp_vars.isStochastic = 1; % random fights
mdp_vars.maxr = [1/3;0.11203;0.1];

return