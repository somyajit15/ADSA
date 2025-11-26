LU Decomposition – README

Aim:
To decompose a square matrix A into a lower triangular matrix (L) and an upper triangular matrix (U) such that A = L × U.

Objective:
The program reads a 4×4 matrix from the user, performs LU decomposition using Doolittle’s method where the diagonal of L is 1, and prints the resulting L and U matrices.

Theory:
LU decomposition factorizes matrix A into:
L – a lower triangular matrix with ones on the diagonal
U – an upper triangular matrix
This technique is used to solve systems of linear equations efficiently, compute matrix inverses, and evaluate determinants. Instead of solving AX = B directly, the system is solved using L × U × X = B through forward and backward substitution.

Explanation of Program:
1. User enters a 4×4 matrix A.
2. U is computed first using: U[i][k] = A[i][k] − Σ(L[i][j] × U[j][k])
3. L is computed using: L[k][i] = (A[k][i] − Σ(L[k][j] × U[j][i])) / U[i][i]
4. The diagonal of L is set to 1.
5. The program prints Matrix A, Matrix L, and Matrix U.

Output:
The program prints:
Original Matrix A
Lower Triangular Matrix L
Upper Triangular Matrix U

Important Notes:
Matrix size N = 4 can be changed.
LU decomposition requires non-zero pivot values (U[i][i] ≠ 0).
Algorithm applies only to square matrices.

Applications:
Solving linear equations for multiple right-hand sides
Scientific computing and numerical methods
Matrix inversion and determinant calculation
