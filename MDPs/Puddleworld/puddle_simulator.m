function [nextstate, reward, absorb] = puddle_simulator(state, action)

env = puddle_environment();

if nargin == 0

    % Initial random state
    nextstate = 0.95 * rand(2,1);
    return
    
elseif nargin == 1
    
    nextstate = state;
    return
    
end

% Transition function
switch action
    case 1 % Left
        state(1) = max(state(1) - env.step(1), env.minstate(1));
    case 2 % Right
        state(1) = min(state(1) + env.step(1), env.maxstate(1));
    case 3 % Up
        state(2) = min(state(2) + env.step(2), env.maxstate(2));
    case 4 % Down
        state(2) = max(state(2) - env.step(2), env.minstate(2));
    otherwise
        error('Unknown action.')
end

nextstate = state;

% Distance from the nearest edge of the puddle
reward1 = puddle_reward_distance(nextstate);
% Time
reward2 = -1;

if norm(nextstate - env.goal) <= env.step
    absorb = 1;
else
    absorb = 0;
end

reward = [reward1; reward2];

end


%% Helper function
function reward = puddle_reward_distance(state)

p1 = [0.1 0.75; % Centers of the first puddle
    0.45 0.75];
p2 = [0.45 0.4; % Centers of the second puddle
    0.45 0.8];
radius = 0.1;
factor = 400; % Total number of cells

if state(1) > p1(2,1)
    d1 = norm(state' - p1(2,:));
elseif state(1) < p1(1,1)
    d1 = norm(state' - p1(1,:));
else
    d1 = abs(state(2) - p1(1,2));
end

if state(2) > p2(2,2)
    d2 = norm(state' - p2(2,:));
elseif state(2) < p2(1,2)
    d2 = norm(state' - p2(1,:));
else
    d2 = abs(state(1) - p2(1,1));
end

min_distance_from_puddle = min(d1, d2);
if min_distance_from_puddle > radius
    reward = 0;
else
    reward = - factor * (radius - min_distance_from_puddle);
end

end
