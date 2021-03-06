function dcart_plot(state, action)

persistent figureHandle agentHandle

env = dcart_environment;

if isempty(findobj('type','figure','name','Double Cart Plot'))
    figureHandle = figure();
    figureHandle.Name = 'Double Cart Plot';
    hold all
    
    plot([env.minstate(1),env.minstate(1)],[0,10],'r','LineWidth',2)
    plot([env.maxstate(1),env.maxstate(1)],[0,10],'r','LineWidth',2)
    
    agentHandle{1} = plot(0,0,'k','LineWidth',6); % Cart
    agentHandle{2} = plot(0,0,'ko','MarkerSize',12,'MarkerEdgeColor','k','MarkerFaceColor','k'); % Cart-Pole Link / Wheel
    agentHandle{3} = plot(0,0,'k','LineWidth',4); % Pole1
    agentHandle{4} = plot(0,0,'g','LineWidth',4); % Pole2
    
    axis([-3 3 0 1.5]);
end

if nargin == 0
    return
end

x1 = state(1);
y1 = 0.1;
theta = state(3:4);
x2 = sin(theta) .* 2 .* env.length + x1;
y2 = cos(theta) .* 2 .* env.length + y1;

agentHandle{1}.XData = [x1-0.2 x1+0.2];
agentHandle{1}.YData = [y1 y1];

agentHandle{2}.XData = x1;
agentHandle{2}.YData = y1;

agentHandle{3}.XData = [x1 x2(1)];
agentHandle{3}.YData = [y1 y2(1)];
agentHandle{4}.XData = [x1 x2(2)];
agentHandle{4}.YData = [y1 y2(2)];

end