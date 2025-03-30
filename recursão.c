#include<unistd.h>
#include<stdio.h>

int main() {
    int i;

    // Solicita o valor inicial da contagem regressiva
    printf("Digite o valor inicial da contagem regressiva: ");
    
    // Verifica se o valor digitado é válido
    if (scanf("%d", &i) != 1 || i < 1) {
        printf("Valor inválido! Por favor, digite um número inteiro maior ou igual a 1.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Contagem regressiva
    while (i >= 1) {
        printf("Contagem: %d\n", i);
        i--;
        sleep(1); // Pausa de 1 segundo
    }

    // Mensagem final
    printf("Fim da contagem!\n");

    return 0; // Programa executado com sucesso
}