#include <stdio.h>

int main(){
	int rows=0;
	int i, j;
	printf("Enter a number:\n ");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; i++){
		
		for(j=1; j<=10; j++){
			printf(" %d", j*i);
		}
		printf("%d", rows);
	}
	return 0;
}
