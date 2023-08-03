#include <iostream>
using namespace std;

int sum(int arr[], int n)//要用一個函式
{
    int sumnumber = 0;//初始化
    
    for(int i = 0; i < n; i++)//前面i沒有定義所以現在要有
    {
        sumnumber+=arr[i];
    }
    
    return sumnumber;
}

int main() {
	int arr[] = {15, 60, 45, 10};//有陣列時arr才可以是空的
	int n = sizeof(arr)/sizeof(int);//除以sizeof(int)才知道真的長度

	printf("The sum is %d.", sum(arr, n));
	
	return 0;
}
