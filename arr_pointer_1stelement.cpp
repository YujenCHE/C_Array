#include <stdio.h>
/***
       as pointer
 Array --------> function
 
 the size of array becomes the size of 1st elements
 ***/

void callArray(int arr[]){
    printf("The Size of arr in Function is %d\n", sizeof(arr));
    printf("Elements of arr[] : \n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}

int main() {
	int arr[5] = {29, 587, 18, 96, 212};
	
	printf("The Size of arr in main() is %d\n", sizeof(arr));
	callArray(arr);
	
	return 0;
}
