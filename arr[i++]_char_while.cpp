#include <stdio.h>

int main() {
	char arr[6] = {'H', 'A', 'P', 'P', 'Y','\0'};
	
	int i = 0;
	while(arr[i]){
	    printf("%c", arr[i++]);
	}
	
	return 0;
}
