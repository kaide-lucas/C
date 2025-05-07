#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Explicação de ponteiros:
int main() {
    int a = 5;
    int *ptr = &a; // ptr é um ponteiro que armazena o endereço de a
    printf("Valor de a: %d\n", a); // Imprime o valor de a
    printf("Endereco de a: %p\n", &a); // Imprime o endereço de a

}