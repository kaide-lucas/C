#include<stdio.h>

int main(){
int myNumbers[] = {10, 25, 50, 75, 100};
//printf("%lu", sizeof(myNumbers)); //prints 20

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
printf("%d\n", length); // prints 5

    return (0);
}