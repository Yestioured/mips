function phi = lqr_basis_poly(state)

var = lqr_mdpvariables;

% If no arguments just return the number of basis functions
if nargin == 0
    phi = var.nvar_state;
    return
end

assert(size(state,1) == var.dim);
phi = state;

return
