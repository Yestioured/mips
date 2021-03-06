function [front, weights, utopia, antiutopia] = resource_moref( outPlot )
% Returns reference frontiers, weights, utopia and antiutopia points for
% the problem. If OUTPLOT = 1, then it also plots the reference frontier.

front = dlmread('resource_ref.dat');
weights = [];
% warning('No weights are available for the Resource Gathering domain.')
utopia = [];
antiutopia = [];

if outPlot
    hold on
    plotfront(front,'o');
    surfFromScatter(front(:,1),front(:,2),front(:,3),0.1);
    hold off
    xlabel 'Fight Penalty'
    ylabel 'Gold'
    zlabel 'Gems'
    hold off
end

end
