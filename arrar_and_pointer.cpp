#include <stdio.h>

int main() {
	int arr[5] = {29, 10, 459, 19, 43};
	int* ptr = &arr[0];
	
	printf("The address of arr : %p\nThe address of 1st element : %p\n", arr, &arr[0]);
	//%p 是 十六進位
	
	printf("Elements that use pointer : ");
	for(int i = 0; i < 5; i++){
	    printf("%d ", *ptr++);//%d後面要空格
	}
	
	return 0;
}
