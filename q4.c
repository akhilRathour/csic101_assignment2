#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int duplicateCount = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break; 
            }
        }
    }

    return duplicateCount;
}

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i <n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Total number of duplicate elements found in the array is : %d\n", countDuplicates(array, n));

    return 0;
}
