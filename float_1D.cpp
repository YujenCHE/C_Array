#include <stdio.h>

int main() {
	float arr[5];
	arr[0] = 2;

	for(int i = 1; i < 5; i++){
	    arr[i] = arr[i - 1] * 0.5;
	    printf("arr[%d] = %.3f\n", i, arr[i]);
	}
	
	return 0;
}
