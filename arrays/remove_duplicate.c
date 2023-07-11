#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    int i, j, k;
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size;) {
            if (arr[j] == arr[i]) {
                // Shift elements to the left to overwrite the duplicate
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;  // Reduce the size of the array
            } else {
                j++;  // Move to the next element
            }
        }
    }
    
    return size;  // Return the new size of the array after removing duplicates
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5};  // Example array

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    int newSize = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    printArray(arr, newSize);

    return 0;
}

/*output:
Original array: 1 2 2 3 4 4 5 5 5 
Array after removing duplicates: 1 2 3 4 5 
*/