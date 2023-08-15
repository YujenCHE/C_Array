#include <stdio.h>

void missing(int arr[], int n)
{
    int temp[n-1];
    for(int i; i <= n; i++)
    {
        temp[i] = 0;
    }
    
    for(int j; j < n; j++)
    {
        temp[arr[j] - 1] = 1;
    }
    
    for(int m; m < n; m++)
    {
        if(temp[m] == 0)
        {
            printf("Missing : %d.\n", m+1);
        }
    }
}

void repeat(int arr[], int n)
{
    for(int u; u < n; u++)
    {
        for(int v; v < n; v++)
        {
            if(u == v)
            {
                continue;
            }
            
            if(arr[u] == arr[v])
            {
                printf("Repeat : %d.", arr[u]);
                return;
            }
        }
    }
}

int main() {
	int array[] = {5,6,2,2,3,4};
	int N = sizeof(array) / sizeof(array[0]);
	
	missing(array, N);
	repeat(array, N);
	
	return 0;
}
