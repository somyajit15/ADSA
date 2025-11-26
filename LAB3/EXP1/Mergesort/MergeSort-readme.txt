Merge Sort – README

Aim:
To sort an array of elements using the merge sort algorithm based on divide-and-conquer.

Objective:
The program accepts an array from the user, recursively divides the array into two halves, sorts each half individually, merges them back together, and prints the fully sorted array.

Theory:
Merge sort is a divide-and-conquer sorting algorithm. The array is repeatedly divided into two halves until each portion contains a single element. During the merging phase, the subarrays are combined in sorted order using a temporary structure. Merge sort has a time complexity of O(n log n) and guarantees stable sorting.

Explanation of Program:
1. The user enters the number of elements and then the array elements.
2. The mergesort() function splits the array recursively into left and right halves.
3. The merge() function merges two sorted subarrays by comparing the elements and arranging them in increasing order.
4. After recursion completes, the final sorted array is printed to the user.

Output:
The program prints:
Original unsorted array
Sorted array after applying merge sort

Important Notes:
Merge sort uses recursion and additional memory for temporary subarrays.
Time complexity is O(n log n) in all cases (best, average, worst).
Stable sorting technique, making it useful when preserving the order of equal elements matters.

Applications:
Suitable for sorting large datasets
Used in external sorting when data does not fit into memory
Widely applied in computational and data processing applications
