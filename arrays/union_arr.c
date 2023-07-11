#include <stdio.h>

void findUnion(int arr1[], int size1, int arr2[], int size2) {
    int i, j, k;
    int unionArr[size1 + size2]; // Union array

    k = 0; // Index for union array

    // Copy elements from arr1 to unionArr
    for (i = 0; i < size1; i++) {
        unionArr[k++] = arr1[i];
    }

    // Check if each element in arr2 is already in unionArr
    for (i = 0; i < size2; i++) {
        int isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};      // First array
    int arr2[] = {4, 5, 6, 7, 8};      // Second array

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, size1, arr2, size2);

    return 0;
}

/*output:
Union of the two arrays: 1 2 3 4 5 6 7 8 
*/