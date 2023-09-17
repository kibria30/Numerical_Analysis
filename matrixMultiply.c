#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX_SIZE 1000

int row1, col1, row2, col2;
int matrix1[3][3], matrix2[3][3], ans[3][3];

void multiply(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			ans[i][j] = 0;
			for(int k=0; k<3 ; k++){
				ans[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

void makeMatrix(){
	row1 = col1 = row2 = col2 = 3;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matrix1[i][j] = (int)(rand() % 10);
			matrix2[i][j] = (int)(rand() % 10);
		}
	}
			
}

void printMatrix(int matrix[3][3]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}


int main(){
	makeMatrix();
	printf("Matrix1:\n");
	printMatrix(matrix1);
	printf("Matrix2:\n");
	printMatrix(matrix2);
	multiply();
	printf("Answer:\n");
	printMatrix(ans);
}
