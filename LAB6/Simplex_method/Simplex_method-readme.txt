Simplex Method – README

Aim:
To solve a linear programming problem using the Simplex method in tabular (tableau) form and compute the optimal values of decision variables and the objective function.

Objective:
The program constructs the initial simplex tableau for a maximization problem, iteratively performs pivot operations to improve the objective value, and prints intermediate as well as final tableaus. Finally, it extracts and prints the optimal values of the decision variables and the maximum objective value.

Theory:
The Simplex method is an iterative algorithm used to solve linear programming problems of the form:
Maximize Z = c1x1 + c2x2 + ... subject to linear constraints.
It transforms the problem into a system of equalities using slack variables and works on a tableau until an optimal solution is reached.

Key Steps:
1. Identify entering variable: The most negative coefficient in the Z-row.
2. Identify leaving variable: Minimum positive ratio (RHS / pivot column value).
3. Perform pivoting:
   • Normalize pivot row by dividing by pivot element.
   • Update all other rows to make pivot column zero.
4. Repeat until there are no negative values in the Z-row.

Explanation of Program:
1. The initial simplex tableau is defined manually in a 2D array.
2. printTableau() displays the current tableau.
3. The while loop performs simplex iterations:
   • Detect entering and leaving variables
   • Compute pivot
   • Normalize pivot row and eliminate pivot column from other rows
4. When there are no negative values in the Z-row, the optimal solution is reached.
5. Final values of x1, x2 and Z are extracted from the completed tableau and printed.

Output:
The program prints:
• Initial simplex tableau
• Pivot element and updated tableau at each iteration
• Final optimal tableau
• Optimal values of decision variables (x1 and x2)
• Optimal objective function value Z

Time Complexity:
Worst-case theoretical complexity: Exponential  
Average practical performance: Polynomial and extremely efficient for most LP problems

Important Notes:
The tableau in this example corresponds to a maximization problem with:
Constraints converted using slack variables
Two decision variables (x1, x2) and two slack variables (s1, s2)
This implementation solves a fixed LP problem but can be modified for general use.

Applications:
Industrial optimization and resource allocation
Transportation and supply chain optimization
Production planning and scheduling
Operations research and decision support systems
