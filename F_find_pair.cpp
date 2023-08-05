#include <stdio.h>



int main() {
	int arr[] = {3, 32, 72, 25, 54, 64};
	int n = sizeof(arr)/sizeof(arr[0]);
	int differ = 30;
	
	int a,b;
	for(int i = 0; i < n; i++)
	{
	    a = arr[i];
	    for(int j =0; j < n; j++)
	    {
	        b = arr[j];
	        if((a-b) == 30 || (b-a) == 30)
	        {
	            printf("Pair found : (%d, %d)", a, b);
	        }
	    }
	}
	
	return 0;
}
