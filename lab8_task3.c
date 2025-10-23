#include <stdio.h>

int main(){
    int rows = 5, columns = 5;
    char seats[5][5];
    int i, j, students = 0, empty = 0;
    
     for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if ((i + j) % 2 == 0){
                seats[i][j] = 'O';
                empty++;
            }
            else{
                seats[i][j] = 'X';
                students++;
            }
        }
    }
    
    printf("Clasroom Seating Chart: ");
    printf("\n========================\n");
    printf("X = Student, O = Empty\n");
    
    for(i=0; i < rows; i++){
    	printf("Row &d ", i+1);
    	for(j=0; j < columns; j++){
    		printf(" %c", seats[i][j]);
		}
		printf("\n");
	}
    
    printf("\nSummary:\n");
    printf("Students Seated: %d\n",students);
    printf("Empty Desks: %d\n", empty);
    printf("Total Desks: %d\n", rows * columns);
    return 0;
}
