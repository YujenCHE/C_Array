#include <stdio.h>

int* func(){
    
    static int arr[5] = {1, 2, 3, 4, 5};
    /***
     static 
     
     when the variables are declared as a static, 
     it means that the variables are allocated FOREVER THE SAME in the program
     the variables are stored 
     ***/
    
    return arr;
}

/***
 Why we need to use static :
 
 when the function return a value , everything inside it are deleted.
 we need to store the variables.
***/

int main() {
	
	int* ptr = func();
	
	printf("Elements of arr : \n");
	for(int i = 0; i < 5; i++){
	    printf("%d ", *ptr++);
	}
	
	return 0;
}
