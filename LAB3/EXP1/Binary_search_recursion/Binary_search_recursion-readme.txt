Binary Search (Recursive) – README

Aim:
To search for a specific element in a sorted array using the binary search algorithm implemented through recursion.

Objective:
The program accepts a sorted array and a target value from the user, recursively divides the search range to locate the target, and prints the index if found.

Theory:
Binary search is an efficient algorithm that works only on sorted arrays. It repeatedly compares the target value with the middle element of the current range and eliminates half of the search space in each step. Recursion is used to call the binary search function again on either the left or right subarray until the element is found or the range becomes invalid.

Explanation of Program:
1. The user enters the size of the array and inputs the values in increasing order.
2. The user enters the target value to be searched.
3. The recursive function binarysearch() checks:
   - If the middle element matches the target, the index is returned.
   - If the target is smaller than the middle element, the function is called on the left subarray.
   - If the target is larger, the function is called on the right subarray.
4. The main function prints the index if the target is found, otherwise displays "Element not found".

Output:
The program prints:
The array entered by the user
Whether the target was found or not
If found, the index position of the target

Important Notes:
The input array must be sorted for binary search to work correctly.
Indexing starts from 0.
Recursive approach is used; the base case is when left > right, meaning the element does not exist in the array.

Applications:
Binary search is commonly used in searching operations on sorted datasets, indexing, and fast lookup operations in computer science.
