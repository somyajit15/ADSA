Maximum Bipartite Matching – README

Aim:
To find the maximum number of matchings between two disjoint sets of vertices in a bipartite graph using the DFS-based augmenting path algorithm.

Objective:
The program accepts the adjacency matrix of a bipartite graph (Left set × Right set), attempts to match every vertex from the Left set with a vertex from the Right set, and prints the maximum number of matched pairs along with the matching result.

Theory:
A bipartite graph consists of two disjoint sets of vertices such that every edge connects a vertex from the Left set to a vertex from the Right set.  
Maximum Bipartite Matching finds the maximum number of pairings so that:
• No two edges share a common endpoint
• Each vertex is matched at most once

Algorithm Used:
DFS-based search for augmenting paths (Kuhn’s algorithm):
1. For each vertex u on the Left side, try to find a match on the Right side.
2. For every neighbor v of u, check:
   • If v is not yet matched OR its currently matched partner can be reassigned via another augmenting path.
3. If yes, match u with v.
4. Count all successful matchings.

Explanation of Program:
1. The user inputs m (size of Left set) and n (size of Right set), and the adjacency matrix.
2. matchR[] is initialized to -1 indicating all Right vertices are initially unmatched.
3. For each vertex u on the Left set:
   • seen[] array is reset
   • bpm() checks whether u can be matched by DFS search
4. maxBPM() prints the matched pairs (Right → Left) and returns the maximum number of matchings.

Output:
The program prints:
Maximum Bipartite Matching count
List of successfully matched vertex pairs

Time Complexity:
Worst-case complexity: O(m × n)
where m = number of left vertices, n = number of right vertices

Important Notes:
The graph must be bipartite (edges only between Left and Right sets).
Matrix entry bpGraph[i][j] = 1 indicates an edge between Left i and Right j.
The algorithm ensures no vertex is matched to more than one vertex.

Applications:
Job assignment problems
Student-project or employee-task allocation
Resource scheduling and pairing algorithms
Network flow and matching theory
