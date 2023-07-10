#include <stdio.h>

int main() 
{
	int arr[] = { 2, 5, 6, 1, 7, 10 };
	int* p = arr;
	int (*ptr)[6] = &arr;
	
	printf("p = %p and ptr = %p.\n", p, ptr);//記得用%p (十六進位)
	printf("*p = %p and *ptr = %p.\n", *p, *ptr);//只有*p是{2}，其他都是一整個array
	
	
	//%lu 是無指定的長數字可以用
	printf("Size : p = %lu and ptr = %lu.\n", sizeof(p), sizeof(ptr));// interal的長度
	printf("Size : *p = %lu and *ptr = %lu.\n", sizeof(*p), sizeof(*ptr));//pointer之後的長度
	
	return 0;
}
