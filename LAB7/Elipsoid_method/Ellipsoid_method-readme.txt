Ellipsoid Method – README

Aim:
To determine a feasible point that satisfies a system of linear inequalities using the Ellipsoid Method.

Objective:
The program starts from an initial point and iteratively shrinks and shifts an ellipsoid until the produced point satisfies all constraints. If all inequalities are satisfied, the algorithm prints the feasible point; otherwise, it continues updating the ellipsoid for a fixed number of iterations.

Theory:
The Ellipsoid Method is an iterative algorithm used in convex optimization, especially linear programming. It finds a feasible solution by enclosing the feasible region inside an ellipsoid and progressively reducing its volume while moving it toward the feasible region.

At each step:
1. Check if the current point violates any constraint.
2. If a violated constraint exists:
   • Compute the normalized gradient of that constraint.
   • Update the ellipsoid’s center so that it moves toward the feasible region.
   • Shrink and reshape the ellipsoid using the gradient direction.
3. If no constraints are violated → the current point is feasible.

Mathematical Update Rules:
Let g be the normalized gradient of the violated constraint and P be the ellipsoid shape matrix.

Center update:
    x = x − (P * g) / ((n + 1) * √(gᵀPg))

Shape update:
    P = (n² / (n² − 1)) * [ P − (2 / ((n + 1) * gᵀPg)) * (Pg)(Pg)ᵀ ]

Explanation of Program:
1. Constraints matrix A and vector b store inequalities A·x ≤ b.
2. violated_constraint() checks whether the current point satisfies all constraints.
3. The algorithm starts with:
   • Initial center x = (0, 0)
   • Initial ellipsoid shape matrix P (determines the ellipsoid size)
4. If a constraint is violated:
   • Compute normalized gradient g
   • Compute Pg and gᵀPg
   • Update x and P using ellipsoid formulas
5. Iterations continue until:
   • A feasible point is found, or
   • Maximum iterations are reached

Output:
The program prints:
• Iteration-wise position of current point x
• If a feasible point is reached → prints feasible (x1, x2)
• If not → prints failure message after MAX_ITER iterations

Time Complexity:
Worst-case theoretical runtime: Polynomial  
In practice much slower than interior-point or simplex methods, but important for theoretical foundations of convex optimization.

Important Notes:
This implementation checks feasibility only (not maximizing or minimizing).
Works for linear inequalities in convex regions.
The example constraints represent:
    x1 + x2 ≤ 5
    x1 + 2x2 ≥ 4   (rewritten as −x1 − 2x2 ≤ −4)

Applications:
Theoretical foundation of polynomial-time optimization
Convex feasibility problems
Basis for interior-point methods and cutting-plane techniques
Optimization research and mathematical programming
