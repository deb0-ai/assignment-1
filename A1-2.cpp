#include<stdio.h>
int main(){
	int i , n, max;
	printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
    	printf("Enter the element %d :",i+1);
    	scanf("%d",&arr[i]);
	}
	for (i = 0;i < n; i++){
		if (arr[0] < arr[i]){
			arr[0] = arr[i];
		}
	}
	printf("The largest element in an array is :%d",arr[0]);
	
}
