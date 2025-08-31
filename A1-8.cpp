#include <stdio.h>

int main() {
    char str[] = "madam"; 
    int i = 0, j;
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;

    int isPalindrome = 1; 
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
