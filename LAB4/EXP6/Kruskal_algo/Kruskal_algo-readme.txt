Kruskal’s Algorithm – README

Aim:
To construct a Minimum Spanning Tree (MST) of a connected weighted graph using Kruskal’s algorithm.

Objective:
The program reads the number of vertices and edges of a weighted graph, sorts the edges in non-decreasing order of weights, uses the union-find (disjoint set) technique to avoid cycles, and prints the edges included in the MST along with its total cost.

Theory:
A Minimum Spanning Tree of a graph is a subset of edges that connects all vertices without creating cycles and with minimum possible total weight.  
Kruskal’s algorithm builds the MST incrementally by:
1. Sorting edges in ascending order of weight
2. Selecting the smallest edge that does not form a cycle
3. Repeating until (number of vertices − 1) edges are selected
Cycle detection is done using the disjoint-set (union-find) mechanism.

Explanation of Program:
1. User inputs number of vertices, number of edges, and the edges in the format (u v w).
2. All vertices are initialized in separate sets.
3. Edges are sorted based on weight.
4. For each edge, the root of its source and destination is found using find().
5. If they belong to different sets, the edge is added to MST and unionSet() merges the sets.
6. After all valid edges are processed, the program prints the MST edges and total weight.

Output:
The program prints:
Edges included in the MST
Total cost (sum of weights of MST edges)

Time Complexity:
Sorting of edges: O(E log E)  
Union-Find operations: O(E α(V)) ≈ O(E)  
Overall complexity: O(E log E)  
where V = number of vertices and E = number of edges

Important Notes:
This implementation assumes the graph is connected.
Vertices are represented by integers.
The union-find structure prevents cycles in MST construction.

Applications:
Network design (telephone, electrical, road, computer networks)
Design of cost-efficient spanning infrastructure
Clustering in data analysis and machine learning
