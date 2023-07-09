#include <stdio.h>


int FindMax(int* arr, int size)
{
    int max = arr[0];
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}


int main() {
    
	int arr[5] = {13, 6, 2, 67, 245};
	int SIZE = sizeof(arr) / sizeof(int);
	
	printf("The biggest number of array is %d.", FindMax(arr, SIZE));
	
	return 0;
}
