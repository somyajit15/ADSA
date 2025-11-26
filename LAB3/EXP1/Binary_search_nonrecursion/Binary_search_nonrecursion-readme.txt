Binary Search (Non-Recursive) – README

Aim:
To search for a specific element in a sorted array using the binary search algorithm without recursion.

Objective:
The program takes a sorted array and a target value from the user, applies binary search using an iterative method to locate the element, and displays the index position if found.

Theory:
Binary search is an efficient searching technique that works only on sorted arrays. It repeatedly divides the search interval in half based on comparison with the middle element. Time complexity is O(log n), which is significantly faster than linear search for large datasets.

Explanation of Program:
1. The user enters the number of elements and then inputs the array in increasing (sorted) order.
2. The user provides the target element to search.
3. The binarysearch() function iteratively compares the target with the middle element of the remaining search range:
   - If equal, index is returned.
   - If the target is smaller, the search continues in the left subarray.
   - If the target is larger, the search continues in the right subarray.
4. The program prints the index if the element is found, otherwise it prints "Element not found".

Output:
The program prints:
The input sorted array
Whether the target element is found or not
If found, the index position of the target

Important Notes:
The array must be sorted for the binary search algorithm to work correctly.
Indexing starts from 0.
Non-recursive (iterative) approach used.

Applications:
Binary search is widely used in searching operations on sorted datasets, database indexing, and high-performance data lookup.
