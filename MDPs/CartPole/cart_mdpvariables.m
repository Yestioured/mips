function mdp_vars = cart_mdpvariables()
% Reference: A Wieland, Evolving Controls for Unstable Systems (1991)

mdp_vars.nvar_state = 4;
mdp_vars.nvar_action = 1;
mdp_vars.nvar_reward = 1;
mdp_vars.action_list = [1,2];
mdp_vars.gamma = 0.99; % Alternatively set it to 1 and give a positive reward (1 or cos(theta)) at each timestep
mdp_vars.isAvg = 0;
mdp_vars.isStochastic = 0;
mdp_vars.maxr = 1;

return
