#include <stdio.h>

int main() {
	int arr[4][2][3] = {1, 943, 0 ,92, 7, 23,
	                    2, 299, 2, 49, 14, 439,
	                    20,105, 10, 42, 20, 239,
	                    210, 43, 1, 10, 49, 194};
	
	for(int i = 0; i < 4; i++){
	    for(int j = 0; j < 2; j++){
	        for(int k = 0; k < 3; k++){
	            printf("%d ", arr[i][j][k]);

	        }
	        printf("\n");
	    }
	    printf("------------------------\n");
	}
	
	return 0;
}
