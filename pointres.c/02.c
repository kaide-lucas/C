#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "");

    int *x, valor, y;
    valor = 35;
    x = &valor; // x aponta para valor
    y = *x; // y recebe o valor apontado por x
    printf("Endereco da variavel comum valor: %p\n", &valor);
    printf("Lendo o conteudo do ponteiro x: %p\n", x);
    printf("Endereço da variavel ponteiro x: %p\n", &x);
    printf("contúdo da variavel apontada por x: %d\n", *x);
    printf("Conteudo da variavel comun y: %d\n", y);


    return 0;
}