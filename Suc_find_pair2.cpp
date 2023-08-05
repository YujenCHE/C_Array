#include <stdio.h>

void findpair(int arr[], int N, int diff)
{
    for(int i = 0; i < N; i++)
	{
	    for(int j =0; j < N; j++)
	    {
	        if(i == j)
	        {
	            continue;
	        }
	        if((arr[i] - arr[j]) == diff || (arr[j] - arr[i]) == diff)
	        {
	            printf("Pair found : (%d, %d)", arr[i], arr[j]);
	            return;
	        }
	    }
	}
	printf("No pair");
}


int main() {
	int arr[] = {3, 32, 72, 25, 54, 64};
	int n = sizeof(arr)/sizeof(arr[0]);
	int differ = 40;
	
	findpair(arr, n, differ);
	
	return 0;
}
