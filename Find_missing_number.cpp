#include <stdio.h>

void findmissing(int arr[], int n)
{
    int temp[ n+1 ];//##
    for(int i; i <=n ; i++)
    {
        temp[i] = 0;//initialized
    }
    
    for(int k; k < n; k++)
    {
        temp[arr[k] -1 ] = 1;
        //用另一個array--temp
        //來讓missing number代表的temp element = 0 ==>沒有東西
    }
    
    int ans;
    for(int j; j <= n; j++)
    {
        if(temp[j] == 0)
        {
            ans = j+1;
        }
    }
    
    printf("The missing number is %d.", ans);
}

int main() {
    
    int arr[] = {1, 2, 3, 6, 7, 8, 4};
    int N = sizeof(arr)/sizeof(arr[0]);
    
    findmissing(arr, N);
	
	return 0;
}
