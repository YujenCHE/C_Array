#include <stdio.h>


float AVarray(float* arr, int Size)
{
    int sum = 0;
    
    for(int i = 0; i < Size; i++){
        sum+=arr[i];
    }
    return (float)sum / Size;//先把sum變成浮點數才能算小數點
}    
    
int main() 
{
	float arr[5] = {1, 9, 22, 92, 14};
	int n = sizeof(arr) / sizeof(float);//Important
	
	printf("Array Element : ");
	for(int j = 0; j < n; j++){
	    printf("%.0f ", arr[j]);
	}
	
	printf("\nAverage of the array : %.11f", AVarray(arr, n));
	 
	return 0;
}


    
