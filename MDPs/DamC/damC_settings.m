function [ n_obj, policy, episodes, steps, gamma ] = damC_settings

mdp_vars = damC_mdpvariables();
n_obj = mdp_vars.nvar_reward;
gamma = mdp_vars.gamma;
dim = mdp_vars.nvar_action;

bfs = @damC_basis_rbf;
% A0 = [50, -50, 0, 0, 50];
A0 = zeros(1,bfs());
% policy = gaussian_linear(bfs, dim, A0, 20);
policy = gaussian_diag_linear(bfs, dim, A0, 20);
% policy = gaussian_logistic_linear(bfs, dim, A0, 1, 50);

%%% Evaluation
episodes = 1000;
steps = 100;

%%% Learning
episodes = 50;
steps = 100;

end
