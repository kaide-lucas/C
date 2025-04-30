#include <stdio.h>

int main(){
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d,%d ", i, j);
        }
        printf("\n");
    }
    return (0);
}

/*int main() {
    // Loop externo (controle das linhas)
    for (int i = 1; i <= 3; i++) {
        // Loop interno (controle das colunas)
        for (int j = 1; j <= 3; j++) {
            printf("%d,%d  ", i, j);  // Imprime as coordenadas
        }
        printf("\n");  // Pula para a próxima linha
    }*/
   

   /*int main() {
  int number = 2;
  int i;

  // Print the multiplication table for the number 2
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}*/