#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i, j, k;
    int intersection[size1 < size2 ? size1 : size2]; // Intersection array

    k = 0; // Index for intersection array

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[k++] = arr1[i];
                break; // Move to the next element of arr1
            }
        }
    }

    printf("Intersection of the two arrays: ");
    if (k == 0) {
        printf("No common elements found.\n");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};      // First array
    int arr2[] = {4, 5, 6, 7, 8};      // Second array

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}

/*output:
Intersection of the two arrays: 4 5 
*/
