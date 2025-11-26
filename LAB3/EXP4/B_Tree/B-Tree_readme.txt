B-Tree – README

Aim:
To implement a B-Tree that supports insertion of keys and traversal of the tree while maintaining balanced multi-way search structure.

Objective:
The program allows the user to insert integer values into a B-Tree of minimum degree T = 3 and displays the contents of the tree using traversal. The B-Tree grows dynamically by splitting nodes when they become full.

Theory:
A B-Tree is a self-balancing multi-way search tree primarily used in file systems and databases. Unlike binary search trees, a B-Tree node can store multiple keys and can have multiple children, making it efficient for disk-based storage. Each internal node may contain between T−1 and 2T−1 keys, and children count ranges from T to 2T.

Key Properties of a B-Tree:
1. Keys inside a node are stored in sorted order.
2. All leaves appear at the same depth.
3. A node can contain multiple keys, reducing tree height.
4. Insertion splits nodes when they become full and promotes the median key upward.

Explanation of Program:
1. createNode() allocates a new node with a flag indicating whether it is a leaf.
2. insert() checks whether the root is full:
   - If full, the root is split and height of the tree increases.
   - Otherwise, the new key is inserted without splitting the root.
3. splitChild() splits a full child during insertion and moves the median key to the parent.
4. insertNonFull() inserts a new key into a node that is not full by placing it in sorted order or recursively inserting into the appropriate child.
5. traverse() recursively prints all keys of the B-Tree in sorted order.
6. The menu in main() allows users to repeatedly insert elements and display the tree.

Output:
The program prints:
Keys of the B-Tree in sorted order when Display is selected from the menu.

Time Complexity:
-----------------------------------------
Operation                     Complexity
Insertion                    O(T log n)
Traversal                    O(n)
Search (implicit structure)  O(T log n)
Space Complexity             O(n)

Important Notes:
The minimum degree T can be changed using the macro definition.
Each node can store up to (2T − 1) keys.
This implementation includes insertion and traversal only; deletion is not included.

Applications:
Used in database indexing and file storage systems.
Efficient for large datasets accessed from secondary memory.
Widely applied in systems requiring sorted data with minimal disk I/O.
