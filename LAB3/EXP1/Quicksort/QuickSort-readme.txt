Quick Sort – README

Aim:
To sort an array of elements using the quick sort algorithm based on divide-and-conquer and partitioning.

Objective:
The program accepts an array from the user, selects a pivot element, rearranges the array so that smaller elements appear on the left and larger elements on the right, recursively sorts the partitions, and prints the final sorted array.

Theory:
Quick sort works by choosing a pivot element and partitioning the array around it. Elements smaller than the pivot are placed to its left, and elements greater than the pivot are placed to its right. The same process is applied recursively to the left and right partitions. Average time complexity is O(n log n), although worst case can be O(n²) if poor pivots are consistently chosen.

Explanation of Program:
1. The user inputs the number of elements and the array values.
2. The partition() function selects the rightmost element as the pivot and rearranges the array so that values less than the pivot are moved to the left side.
3. The quicksort() function recursively sorts the left partition and the right partition based on the pivot index returned from partition().
4. The sorted array is printed after all recursive calls are completed.

Output:
The program prints:
Original unsorted array
Sorted array after applying quick sort

Important Notes:
Quick sort is an in-place sorting algorithm, requiring no additional large temporary arrays.
Efficiency depends on pivot choice; using the last element as pivot works but randomized pivot gives better worst-case performance.
Best and average time complexity: O(n log n)
Worst case: O(n²)

Applications:
Fast sorting in real-time systems
Used widely in system libraries and competitive programming due to speed and low memory usage
Suitable for large datasets when implemented carefully
