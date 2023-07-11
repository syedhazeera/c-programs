#include <stdio.h>

void rotateArray(int arr[], int size, int positions) {
    int temp[positions];
    int i;

    // Store the elements to be rotated in a temporary array
    for (i = 0; i < positions; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (i = positions; i < size; i++) {
        arr[i - positions] = arr[i];
    }

    // Place the elements from the temporary array at the end
    for (i = 0; i < positions; i++) {
        arr[size - positions + i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    int positions = 2;  // Number of positions to rotate

    printf("Original array: ");
    printArray(arr, size);

    rotateArray(arr, size, positions);

    printf("Array after rotating by %d positions: ", positions);
    printArray(arr, size);

    return 0;
}

/*output:
Original array: 1 2 3 4 5 
Array after rotating by 2 positions: 3 4 5 1 2 
*/