AVL Tree – README

Aim:
To implement an AVL Tree that supports insertion, deletion, and inorder traversal while maintaining height balance after every update.

Objective:
The program allows the user to insert and delete nodes in an AVL Tree, automatically performs rotations when imbalance occurs, and displays the tree contents using inorder traversal.

Theory:
An AVL Tree is a self-balancing Binary Search Tree in which the height difference (balance factor) between the left and right subtrees of any node is −1, 0, or +1. After every insertion or deletion, the balance factor is checked and the tree is corrected using rotations.

Rotations used in AVL Tree:
1. Left Rotation
2. Right Rotation
3. Left–Right Rotation
4. Right–Left Rotation
These rotations ensure the tree remains height-balanced for efficient searching and updates.

Explanation of Program:
1. insert() adds a new node like in BST, updates the height, checks the balance factor, and performs the required rotation to restore balance.
2. deleteNode() removes a node like in BST and then restores the AVL balance property through rotations.
3. inorder() prints the elements in sorted order (Left → Root → Right).
4. The main() function provides a menu-driven interface for inserting, deleting, and displaying the AVL Tree.

Output:
The program displays:
Inorder traversal of the AVL Tree after insertion or deletion of nodes.

Time Complexity:
------------------------------------------------------------------------------
Operation                    Best Case          Average Case        Worst Case
Insertion                    O(log n)            O(log n)            O(log n)
Deletion                     O(log n)            O(log n)            O(log n)
Search                       O(log n)            O(log n)            O(log n)
Traversal (Inorder)          O(n)                O(n)                O(n)

Important Notes:
The AVL Tree prevents skewing, unlike a normal BST, ensuring consistent logarithmic performance.
Duplicate keys are not allowed in this implementation.
Inorder traversal shows nodes in ascending sorted order.

Applications:
Maintaining dynamic ordered data
Indexing in databases and file systems
Efficient searching in memory-resident datasets
