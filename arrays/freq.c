#include <stdio.h>
int main() {
    int arr[10];
    int frequency[10];
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        frequency[i] = -1; // Initialize frequency count as -1
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0; // Mark the element as visited
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    printf("Occurrences of each element in the array:\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d time(s)\n", arr[i], frequency[i]);
        }
    }

    return 0;
}
/*output:
Enter the number of elements in the array: 5
Enter 5 elements:
1
2
3
3
5
Occurrences of each element in the array:
1 occurs 1 time(s)
2 occurs 1 time(s)
3 occurs 2 time(s)
5 occurs 1 time(s)
*/
