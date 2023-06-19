// [1 2 3 4]; 1 by 4
// [5 6 7 8]; 1 by 4

#include <stdio.h>
// Declare a pointer to an int


// we want two loop
// and a condition check multiplication possible or not
// limit define how much rows and cols possible

// we write seperate code for multiplication 
// we use here 1D array instead of 2D array that reason it give us pointer to object error. 

void multiplication(int mat1[][4], int mat2[][4], int rows1, int cols1, int rows2, int cols2, int res[][1]) {
    for(int i = 0; i < rows1; i++ ){
        for (int j = 0; j < cols2; j++){
           res[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
        
    }

}

// we write seperate code for display

void display(int res[][1], int rows, int cols){
    for( int i = 0; i < rows; i++ ){
    for( int j = 0; j < cols; j++){
       printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int mat1[][4] = {{1, 2, 3, 4}}; // 2D array
    int mat2[][4] = { {5}, {6}, {7}, {8} }; // 2D array
    int res[1][1];


    // printf("%d", res[1][4]);

    multiplication(mat1, mat2, 1, 4, 4, 1, res);
    display(res, 1, 1);

}
