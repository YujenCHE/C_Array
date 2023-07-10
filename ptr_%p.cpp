#include <stdio.h>

int main() 
{
	int arr[3] = {124, 3, 7};
	int* ptr = arr;
	int* ptr1 = arr[0];
	int* ptr2 = arr[2];
	
	
	printf("%p", ptr);//address of array 
	printf("\n%p", ptr2);//the hex of 3
	printf("\n%p", ptr1);//the hex of 124
	return 0;
}
