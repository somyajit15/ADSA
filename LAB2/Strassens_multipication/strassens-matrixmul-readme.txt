Strassen’s Matrix Multiplication – README

Aim:
To multiply two square matrices using Strassen’s divide-and-conquer algorithm instead of the conventional matrix multiplication approach.

Objective:
The program accepts two matrices of size n × n (where n is a power of 2), recursively divides them into submatrices, applies Strassen’s seven multiplication formulae, and combines the subresults to obtain the final product matrix C.

Theory:
Strassen’s algorithm reduces the number of necessary multiplications from 8 (in normal 2×2 block multiplication) to 7 by using auxiliary matrices. This optimization lowers time complexity from O(n³) to approximately O(n^2.807), making it faster than the standard algorithm for large matrices.

Explanation of Program:
1. The user inputs a matrix size n (must be a power of 2) and enters matrices A and B.
2. A and B are divided into submatrices (A11, A12, A21, A22 and B11, B12, B21, B22).
3. Seven intermediate matrices (M1 to M7) are computed using Strassen’s formulae.
4. The four output blocks C11, C12, C21, and C22 are computed from M1 to M7 and combined into the final matrix C.
5. The program prints the resulting matrix C.

Output:
The program prints:
Resultant matrix C

Important Notes:
Matrix dimension must be a power of 2 for this implementation (2, 4, 8, 16, …).
Strassen’s approach is particularly efficient for large matrix sizes due to fewer multiplications.
Recursion stops when the input is a 1 × 1 matrix (base case).

Applications:
High-performance matrix multiplication
Scientific simulations and computer graphics
Machine learning and numerical computing
