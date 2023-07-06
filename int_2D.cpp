#include <stdio.h>

int main() {
	int arr[2][3] = {1, 943, 0 ,92, 7, 23};
	
	for(int i = 0; i < 2; i++){
	    for(int j = 0; j < 3; j++){
	        printf("%d ", arr[i][j]);//印第一~三列
	    }
	    printf("\n");//到第二行
	}
	return 0;
}
