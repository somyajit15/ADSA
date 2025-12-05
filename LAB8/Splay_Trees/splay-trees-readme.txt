Splay Trees – README

Aim:
To implement and demonstrate the operations of a Splay Tree including insertion, search, deletion, and splaying, where recently accessed elements are moved to the root to improve access efficiency.

Objective:
The Splay Tree is a type of self-adjusting binary search tree in which every operation rearranges the tree so that the accessed node becomes the new root. The program performs splaying operations after insert, search, and delete, allowing frequently accessed elements to be retrieved faster over time.

Theory:
A Splay Tree is a self-balancing binary search tree that performs a splaying operation every time a node is accessed. Splaying involves rotations that move the target node to the root. Unlike AVL and Red-Black Trees, Splay Trees do not strictly maintain balance; instead, they rely on the heuristic that recently accessed nodes are more likely to be accessed again.

Splaying Operations:
Splaying moves a target node to the root using rotations based on its position relative to the root:
1. Zig:
   • Single rotation used when the accessed node is a direct child of the root.
2. Zig-Zig:
   • Double rotation when both the node and its parent are either left children or right children.
3. Zig-Zag:
   • Double rotation when the node is a right child of a left parent or a left child of a right parent.

Operations:
1. Insertion:
   • Insert as in a normal BST.
   • After insertion, splay the inserted node to the root.

2. Search:
   • Search node just like BST.
   • After search, splay the found node to the root.
   • If not found, the last accessed node is splayed to the root.

3. Deletion:
   • Splay the node to be deleted to the root.
   • Remove it. Then merge left and right subtrees by splaying the maximum node of the left subtree and attaching the right subtree.

4. Splaying (core operation):
   • Performed after insert, search, and delete.
   • Rearranges the BST to bring the accessed node to the root.

Explanation of Program:
1. A node structure contains key, left and right child pointers.
2. BST-style navigation is used for insert, delete, and search.
3. After each operation, the splay function performs required rotations to bring the accessed node to the root.
4. The program displays the tree structure or nodes after each modification for clear understanding of splaying effect.

Output:
• Tree content after insertion
• Node brought to root after search
• Tree structure after deletion
• Representation of rotations performed during splaying

Time Complexity (Amortized):
• Insert: O(log n)
• Search: O(log n)
• Delete: O(log n)
• Worst-case per operation: O(n), but amortized complexity is logarithmic

Applications:
• Cache implementations
• Memory allocators
• Garbage collectors
• Networking (maintaining frequently accessed routing entries)
• File system metadata lookups

Important Notes:
• Splay Trees offer good amortized performance without storing balance factors.
• Recently accessed keys become faster to reach due to splaying.
• In worst-case individual operations may be slow, but amortized cost remains O(log n).
