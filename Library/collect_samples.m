function [dataset, J, S] = collect_samples( ...
    domain, maxepisodes, maxsteps, policy )
% Collects full episodes, i.e., it returns a dataset containing information
% also about the single steps for each episode.

simulator = [domain '_simulator'];
mdpvars = feval([domain '_mdpvariables']);
maxr = mdpvars.maxr;

empty_sample.s = [];
empty_sample.a = [];
empty_sample.r = [];
empty_sample.nexts = [];
empty_sample.terminal = [];
dataset = repmat(empty_sample, 1, maxepisodes);

J = 0;
S = 0;

% Main loop
parfor episodes = 1 : maxepisodes
    
    dataset(episodes).policy = policy;
    
    % Select initial state
    initial_state = feval(simulator);
    
    % Run one episode (up to the max number of steps)
    [sample, totrew, totentropy] = ...
        execute(domain, initial_state, simulator, policy, maxsteps);
    J = J + totrew;
    S = S + totentropy;
    
    % Normalize rewards
    sample.r = bsxfun(@times,sample.r,1./maxr);
    
    % Store the new sample
    if ~isempty(sample.a)
        dataset(episodes).s = sample.s;
        dataset(episodes).a = sample.a;
        dataset(episodes).r = sample.r;
        dataset(episodes).nexts = sample.nexts;
        dataset(episodes).terminal = sample.terminal;
    end
    
end

J = J / maxepisodes;
S = S / maxepisodes;

return
