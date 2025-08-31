#include <stdio.h>

int main() {
    int arr[7] = {0, 3, 0, 1, 0, 5, 9};
    printf("The input is = 0 3 0 1 0 5 9\n");
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }
    while (j < size) {
        temp[j++] = 0;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    printf("The output is = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
