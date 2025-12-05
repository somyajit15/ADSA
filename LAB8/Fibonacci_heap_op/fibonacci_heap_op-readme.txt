Fibonacci Heap Operations – README

Aim:
To implement and demonstrate the basic operations of a Fibonacci Heap including insertion, find minimum, deletion, decrease key, extract minimum, and merge.

Objective:
The Fibonacci Heap is a data structure for priority queue operations that provides improved amortized time complexity compared to binary and binomial heaps. The program performs creation of a Fibonacci Heap and applies various supported operations with user-defined keys to observe the structure's behavior.

Theory:
A Fibonacci Heap is a collection of trees that follows the min-heap property. It supports merging of heaps efficiently and lazy structural optimization. Rather than restructuring the heap on every operation, Fibonacci Heap defers consolidation until extract-min is invoked, which leads to excellent amortized performance.

Structure Characteristics:
• Collection of heap-ordered trees
• Minimum pointer to the root with the smallest key
• Each node maintains pointers to parent and children
• Children of a node are stored in a circular doubly linked list
• Rank of a node is the number of its children

Operations:
1. Insertion:
   • Creates a new node and inserts it into the root list.
   • Updates the minimum pointer if necessary.

2. Find Minimum:
   • Returns the node with the smallest key pointed by the min pointer.
   • Time complexity: O(1)

3. Merge (Union):
   • Concatenates the root lists of two heaps.
   • Min pointer becomes the smallest of the two heaps.
   • Time complexity: O(1)

4. Extract Minimum:
   • Removes node pointed by the min pointer.
   • Its children are added to the root list.
   • Consolidation step merges trees of equal degree.
   • Time complexity: O(log n) amortized

5. Decrease Key:
   • Reduces the key of a node.
   • If the heap property is violated, the node is cut and moved to the root list.
   • Cascading cut may trigger additional cuts up the tree.
   • Time complexity: O(1) amortized

6. Delete:
   • Implemented by decreasing the key to −∞ and performing extract-min.
   • Time complexity: O(log n) amortized

Explanation of Program:
1. Struct or class is defined for Fibonacci Heap node storing degree, key, flags, and links.
2. The Fibonacci Heap stores min pointer, total nodes count, and root list information.
3. User selects an operation (insert, decrease key, extract min, delete, merge).
4. The corresponding Fibonacci Heap algorithm updates links, children, parent pointers, and root list.
5. Each major operation prints the output reflecting current heap state.

Output:
• Display of keys inserted in heap
• Minimum element after each extract-min operation
• Updated structure after decrease-key and delete operations
• Heap content after merge operation

Time Complexity (Amortized):
• Insert: O(1)
• Find Minimum: O(1)
• Merge: O(1)
• Decrease Key: O(1)
• Extract Minimum: O(log n)
• Delete: O(log n)

Applications:
• Dijkstra’s shortest path algorithm
• Prim’s minimum spanning tree algorithm
• Event simulation systems
• Network and graph optimization algorithms
• Scheduling and routing applications

Important Notes:
• Fibonacci Heaps are preferred when the number of decrease-key operations is high.
• They provide significant theoretical performance improvement over binary heaps.
• They are complex to implement but powerful for advanced graph algorithms.
