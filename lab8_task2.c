#include <stdio.h>

int main(){
	int i, j, max=0, row_index=0, column_index=0;
	int matrix[3][3] = {
	{12, 34, 56},
	{72, 4, 6},
	{90, 67, 12}
	};
	
	for(i=0; i<3; i++){
		for(j=0; j<1; j++){
		    if(matrix[3][3] > max){
			   max = matrix[i][j];
			   row_index = i;
			   column_index = j;
		    }
	    }
	}
	printf("The maximum number is %d, present in row %d and coulmn %d", max, row_index, column_index);
	
	return 0;
}
