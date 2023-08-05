#include <iostream>
using namespace std;

void findpair(int arr[], int n, int differ)
{
    for(int i = 0; i < n; i++)//兩個for迴圈的運作: 找arr[0] -> 跟arr[1]比差 -> 重複
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j){
                continue;//跑回for(int i = 0; i < n; i++)
            }
            
            if((arr[j]-arr[i])== differ || (arr[i]-arr[j]) == differ){
                printf("Pair Found : (%d,%d)", arr[i], arr[j]);
                return;//有東西時要斬斷No Pair
            }
        }
    }
    cout<<"No Pair";//甚麼都沒有的時候
}

int main() {
	int arr[] = {3, 32, 72, 25, 54, 64};
	int N = sizeof(arr)/sizeof(arr[0]);
	int diff = 40;
	
	findpair(arr, N, diff);
	return 0;
}
