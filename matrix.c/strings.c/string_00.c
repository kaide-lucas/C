#include<stdio.h>
#include<string.h>


int main(){
    char nome[50]; //Declaration array of strings

    printf("Digite seu nome: ");
    scanf("%s", nome); //Reading of name

    printf("O nome armazenado foi: %s", nome); //Showing of name

    return (0);
}

