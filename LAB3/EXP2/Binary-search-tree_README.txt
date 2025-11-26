Binary Search Tree (BST) – README

Aim:
To implement a Binary Search Tree and perform insertion, deletion, and traversal operations (inorder, preorder, and postorder).

Objective:
The program allows the user to dynamically build a BST by inserting and deleting nodes and provides an interactive menu to display the tree using different traversal techniques.

Theory:
A Binary Search Tree is a binary tree in which every node follows the ordering property:
Left child < Root < Right child
This makes searching, insertion, and deletion efficient by reducing the problem size at every comparison.

Explanation of Program:
1. The root is initially NULL.
2. insert() places a new value in the BST recursively based on comparison:
   - If value < node → go to left subtree
   - If value > node → go to right subtree
3. deleteNode() handles three deletion cases:
   - Node to be deleted has no child
   - Node has one child
   - Node has two children (handled by replacing the node with its inorder successor)
4. The program supports three traversal functions:
   - Inorder Traversal (Left, Root, Right) – prints BST in sorted order
   - Preorder Traversal (Root, Left, Right)
   - Postorder Traversal (Left, Right, Root)
5. A menu-driven main() function allows repeated operations until exit.

Output:
The program prints values of nodes based on the selected traversal order and updates the BST after every insertion or deletion.

Time Complexity:
--------------------------------------------------------------------------------
Operation                     Best Case          Average Case        Worst Case
Insertion                    O(log n)            O(log n)            O(n)
Deletion                     O(log n)            O(log n)            O(n)
Search (implicit in traversal) O(log n)          O(log n)            O(n)
Traversals (inorder / preorder / postorder)        O(n)               O(n)               O(n)

Note:
The worst case occurs when the BST becomes skewed (e.g., inserting sorted values without balancing).
BST performance can be improved with self-balancing versions (like AVL or Red-Black Trees).

Applications:
Efficient searching and indexing
Dynamic data storage where insertion, deletion, and search occur frequently
Used in compilers, databases, and file systems for ordered data access
