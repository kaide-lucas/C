#include<stdio.h>

int main(){
//tipo nome_do_array[tamanho];

    int numeros[] = {10, 20, 30, 40, 50};

printf("%d\n", numeros[2]);

numeros[1] = 100;

//Modificando elementos de um array
printf("%d\n", numeros[1]);

//Array 2D
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
}; 

//Acessando elementos
printf("%d\n", matriz[0][1]);

//Array multidimensional (matiz 2x3):
int matriz_01[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++){

        printf("%d", matriz_01[i][j]);

    }
    printf("\n");
}


return (0);
}