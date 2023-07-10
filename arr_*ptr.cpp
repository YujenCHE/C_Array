#include <stdio.h>

int main() {
	int arr[3][4] = {10, 17, 26, 79, 53, 84, 31, 45, 68, 99, 71, 67};
	
	int (*ptr)[4];
	ptr = arr;
	
	printf("ptr=%p\n\n"
	"ptr+1=%p\n\n"
	"ptr+2=%p\n\n", ptr, ptr + 1, ptr + 2);
	
	printf("*ptr=%p\n\n"
	"*(ptr+1)=%p\n\n"
	"*(ptr+2)=%p\n\n", *ptr, *(ptr + 1), *(ptr + 2));
	
	printf("Array using pointer : %d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 1) + 3));
	
	printf("Array using ptr : %d %d %d\n", ptr[0][0], ptr[2][3], ptr[1][0]);
	return 0;
}
