function puddle2_plot(state, action)

persistent figureHandle agentHandle

if isempty(findobj('type','figure','name','Puddle2 Plot'))
    figureHandle = figure();
    figureHandle.Name = 'Puddle2 Plot';
    hold all
    
    p1 = [0.1 0.75; % Centers of the first puddle
        0.45 0.75];
    p2 = [0.45 0.4; % Centers of the second puddle
        0.45 0.8];
    p3 = [0.8 0.2;  % Centers of the third puddle
        0.8 0.5];
    p4 = [0.7 0.75; % Centers of the fourth puddle
        0.7 0.8];
    
    radius = 0.1;
    grey = [0.4,0.4,0.4];
    
    % Circles
    p = [p1; p2; p3; p4];
    circles(p(:,1), p(:,2), radius, 'color', grey, 'edgecolor', grey)
    
    % Rectangles
    patch([0.1 0.45 0.45 0.1], [0.65 0.65 0.85 0.85], grey, 'EdgeAlpha', 0)
    patch([0.35 0.55 0.55 0.35], [0.4 0.4 0.8 0.8], grey, 'EdgeAlpha', 0)
    patch([0.7 0.9 0.9 0.7], [0.2 0.2 0.5 0.5], grey, 'EdgeAlpha', 0)
    patch([0.6 0.8 0.8 0.6], [0.75 0.75 0.8 0.8], grey, 'EdgeAlpha', 0)
    
    % Triangle
    x = [0.95, 1.0, 1.0];
    y = [1.0, 0.95, 1.0];
    fill(x, y, 'r')
    
    axis([0 1 0 1])
    box on
    axis square
    
    agentHandle = plot(1,1,'ro','MarkerSize',8,'MarkerFaceColor','r'); % Agent
end

if nargin == 0
    return
end

agentHandle.XData = state(1);
agentHandle.YData = state(2);

title('')
if nargin == 2
    title(['S: [' num2str(state(1)) ', ' num2str(state(2)) ... 
        '], A: [' num2str(action(1)) ', ' num2str(action(2)) ']'])
end

end
