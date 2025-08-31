#include <stdio.h>
int main() {
    int n,i,e;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
    	printf("Enter the element %d :",i+1);
    	scanf("%d",&arr[i]);
	}
    printf("Array before insertion :");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	printf("Enter the element to be inserted :");
	scanf("%d",&e);
    arr[n] = e;

    printf("\nArray after insertion\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
