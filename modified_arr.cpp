#include <stdio.h>

int main() {
	int arr[5] = {7, 6, 78, 4, 12};
	printf("Before modified : \n");
	for(int i = 0; i < 5; i++){
	    printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	arr[4] = 3;//不用{}
	printf("\nAfter modified : \n");
	for(int j = 0; j < 5; j++){
	    printf("arr[%d] = %d\n", j, arr[j]);
	}
	return 0;
}
