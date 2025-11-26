LUP Solver – README

Aim:
To solve a system of linear equations A × x = b using LUP decomposition, which factorizes matrix A into a permutation matrix P, a lower triangular matrix L, and an upper triangular matrix U.

Objective:
The program performs LUP decomposition with partial pivoting to improve numerical stability, then solves the equation A × x = b by first applying the permutation to b, followed by forward and backward substitution.

Theory:
LUP decomposition rewrites the matrix A as:
P × A = L × U
where:
P is a permutation matrix created through row interchanges,
L is a lower triangular matrix with diagonal elements equal to 1,
U is an upper triangular matrix.
This avoids division by zero and reduces numerical errors compared to LU decomposition without pivoting.

Explanation of Program:
1. The function lupDecomposition() performs LU decomposition with partial pivoting and stores pivot information in permutation array P.
2. L and U matrices are extracted from the modified A.
3. The permutation vector P is applied to the vector b to compute Pb.
4. forwardSubstitution() solves L × y = Pb.
5. backwardSubstitution() solves U × x = y to obtain the final solution vector x.
6. The program prints permutation vector P, matrices L and U, and the solution vector x.

Output:
The program prints:
Permutation matrix in vector form (P)
Lower triangular matrix (L)
Upper triangular matrix (U)
Solution of the system (x)

Important Notes:
Matrix size is defined using macro N = 3 but can be modified.
Partial pivoting ensures stability by swapping rows to avoid very small pivot elements.
Works only for nonsingular square matrices.

Applications:
Solving multiple linear systems with the same coefficient matrix,
Numerical simulations and scientific computations,
Matrix inversion and determinant calculation using decomposition.
