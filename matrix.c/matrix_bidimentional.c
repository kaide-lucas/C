#include<stdio.h>

int main(){
/*
    int matrix[2][3] = {{1, 4, 3}, {3, 6, 8}};
    matrix[0][0] = 9; //Change the value of the element
    printf("%d\n", matrix[1][1]);
*/

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}
    

    return (0);
}