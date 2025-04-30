#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Um "for loop" (ou laço de repetição for)
é uma estrutura de controle de fluxo usada para
repetir um bloco de código várias vezes.*/

/*
int main(){
    for (size_t i = 5; i < 10; i++)
    {
        printf("Hi\n");
    }
    return 0;
    
}
*/
int main(){
    
    setlocale(LC_ALL, "portuquese");

    for (int i = 0; i < 5; i++)
    {
        printf("Valor de i são: %d\n", i);
    }
    return 0;
}

