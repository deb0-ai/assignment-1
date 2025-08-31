#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int counted[size];  // To track which elements are already counted

    for (int i = 0; i < size; i++) {
        int count = 1;

        // Skip if already counted
        if (counted[i] == 1)
            continue;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;  // Mark as counted
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
