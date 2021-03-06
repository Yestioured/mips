function values = getUniformSamples(N, range, discrete)
% GETUNIFORMSAMPLES Draws samples from an uniform distribution.
%
%    INPUT
%     - N        : number of samples to be returned
%     - range    : R-by-2 matrix containing the min-max values for each 
%                  output dimension
%     - discrete : if 1, the samples will be uniform in [range] (i.e., 
%                  extremity included), if 0 the samples will be continuous 
%                  in (range) (i.e., extremity excluded)
%
%    OUTPUT
%     - values   : R-by-N matrix with uniform random samples

if ~discrete
    values = bsxfun(@plus, range(:,1), bsxfun(@times, ...
                (range(:,2) - range(:,1)), rand(size(range,1),N)));
else
    values = bsxfun(@plus, range(:,1), bsxfun(@times, ...
                (range(:,2) + 1 - range(:,1)), rand(size(range,1),N)));
    values = floor(values);
end

