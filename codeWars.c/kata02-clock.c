/*
- Clock shows h hours, m minutes, s seconds after midnight.
- Your task is to write a function which returns the time since midnight in miliseconds.
*/

#include<stdio.h>
int past(int hours, int minutes, int seconds){
    /*
    1s = 1000 miliseconds
    1m = 60s = 60000 miliseconds
    1h = 60m = 3600000 miliseconds
    miliseconds = (h x 360000 miliseconds) + (m x 60000) + (s x 1000)
    */
   return (hours * 3600000)+(minutes * 60000)+(seconds * 1000);
}


int main() {
    printf("%d\n", past(0, 1, 1));    // Esperado: 61000
    printf("%d\n", past(1, 0, 0));    // Esperado: 3600000
    printf("%d\n", past(0, 0, 0));    // Esperado: 0
    printf("%d\n", past(1, 1, 1));    // Esperado: 3661000
    return 0;
}