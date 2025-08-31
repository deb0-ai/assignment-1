#include <stdio.h>

int main() {
    char str[] = "UEM";
    int i = 0, j;

    // Find the length of the string manually
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;  // Last character index

    // Reverse the string in-place
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
