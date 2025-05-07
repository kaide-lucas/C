#include<unistd.h>
#include<stdio.h>

void swap(int *a, int *b) {
    
    int tempo;
    tempo = *a; // Armazena o valor apontado por a em tempo
    *a = *b; // Atribui o valor apontado por b a a
    *b = tempo; // Atribui o valor armazenado em tempo a b

}