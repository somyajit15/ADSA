#include <stdio.h>

// Ternary Search Function
int tsearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == x) return mid1;
        if (arr[mid2] == x) return mid2;

        if (x < arr[mid1]) 
            return tsearch(arr, left, mid1 - 1, x);
        else if (x > arr[mid2]) 
            return tsearch(arr, mid2 + 1, right, x);
        else 
            return tsearch(arr, mid1 + 1, mid2 - 1, x);
    }
    return -1; // not found
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int result = tsearch(arr, 0, n - 1, x);

    if (result != -1)
        printf("Element %d found at index %d\n", x, result);
    else
        printf("Element %d not found in the array.\n", x);

    return 0;
}
