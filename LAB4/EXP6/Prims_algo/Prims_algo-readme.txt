Prim’s Algorithm – README

Aim:
To construct a Minimum Spanning Tree (MST) of a connected weighted graph using Prim’s algorithm.

Objective:
The program reads a weighted undirected graph, selects a starting vertex, repeatedly picks the minimum-weight edge connecting a visited vertex to an unvisited vertex, and prints the edges that form the MST along with the total weight.

Theory:
A Minimum Spanning Tree connects all vertices in a graph with the minimum possible total weight and without forming cycles.  
Prim’s algorithm grows the MST step-by-step by:
1. Starting from an arbitrary vertex (here, vertex 0)
2. Choosing the smallest weighted edge connected to the current MST
3. Repeating until all vertices are included
It uses arrays to track:
• key[] – minimum weight edge connecting a vertex to the MST  
• parent[] – stores MST connections  
• visited[] – marks vertices already included

Explanation of Program:
1. The user inputs the number of vertices and edges, then enters edges in (u v w) format.
2. Graph is stored in an adjacency matrix.
3. key[] is initialized to INT_MAX and updated whenever a lighter connecting edge is found.
4. In each iteration, the vertex with minimum key value that is not yet visited is selected.
5. key[] and parent[] values are updated for its adjacent vertices.
6. After including all vertices, the MST is printed using the parent[] array.

Output:
The program prints:
Edges selected for the MST
Total weight of the MST

Time Complexity:
For adjacency matrix implementation:
Overall complexity: O(V²)
Where V is the number of vertices

Important Notes:
The algorithm assumes the graph is connected.
The implementation uses an adjacency matrix and does not require priority queues.
Vertex numbering starts from 0.

Applications:
Network design (telephone, electrical, roads, and computer networks)
Design of cost-optimized spanning infrastructure
Used in clustering and approximations of NP-hard problems
