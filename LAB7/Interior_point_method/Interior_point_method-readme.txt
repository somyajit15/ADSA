Interior Point Method – README

Aim:
To determine a feasible or optimal solution for a system of linear inequalities or a linear programming problem using the Interior Point Method.

Objective:
The algorithm starts from a strictly interior point and iteratively moves toward the optimal or feasible point while always remaining inside the feasible region. A logarithmic barrier function prevents constraint violation and guides the solution along the central path.

Theory:
The Interior Point Method (IPM) is a polynomial-time optimization algorithm widely used for linear and nonlinear programming. Unlike the Simplex Method, which travels along the boundaries of the feasible region, IPM progresses through the interior by penalizing boundary regions using a barrier term. This allows fast convergence, especially for large-scale optimization.

Algorithm Overview:
1. Formulate the linear program and convert it into a barrier problem.
2. Select a strictly feasible starting point.
3. At each iteration:
   • Compute the barrier function.
   • Compute its gradient and Hessian.
   • Determine the Newton descent direction.
   • Compute step size to ensure all constraints remain satisfied.
   • Update the solution.
4. Reduce the barrier parameter and repeat until convergence.

Mathematical Formulation:
Given linear program:
minimize cᵀx
subject to Ax ≤ b

Barrier objective:
φ(x) = cᵀx − μ Σ ln(bᵢ − aᵢᵀx)

Newton direction:
Δx = −(H⁻¹ g)
where g = gradient of φ(x) and H = Hessian of φ(x)

Solution update:
x = x + α Δx
where α ensures Ax < b always remains true

Barrier parameter update:
μ = μ × β, where 0 < β < 1

Explanation of Program:
1. Matrix A and vector b store inequality constraints Ax ≤ b.
2. The cost vector c contains objective function coefficients.
3. The algorithm begins from an initial interior point.
4. For each iteration:
   • Gradient, Hessian, and Newton step are computed.
   • Step size is chosen to keep the point strictly inside the feasible region.
   • Barrier parameter gradually reduces to improve optimality.
5. Execution stops when:
   • Convergence tolerance is achieved (successful), or
   • Maximum number of iterations is reached (failure).

Output:
• Iteration-wise updated values of x
• Final feasible or optimal point (if convergence occurs)
• Failure message if the algorithm does not converge within MAX_ITER

Time Complexity:
Theoretical runtime: Polynomial
Practical convergence: Very fast
Scalability: Highly efficient for large-scale problems

Applications:
• Linear and nonlinear convex optimization
• Operations research and supply chain optimization
• Power system scheduling and energy economics
• Machine learning (e.g., Support Vector Machines)
• Transportation and resource allocation systems

Important Notes:
• This algorithm maintains strict interior feasibility throughout iterations.
• It can be used for pure feasibility search or full objective minimization depending on the problem formulation.
