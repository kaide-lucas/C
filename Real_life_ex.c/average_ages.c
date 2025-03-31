#include<stdio.h>

//Calculate the average of a diferent ages:
int main(){
int ages[] = {20, 30, 47, 23, 34, 28}; //Age list

float avg, sum = 0; //avg = avarege, sum = soma
int i; //contador

int length = sizeof(ages) / sizeof(ages[0]); //Calculate the number ages have on list 

//Soma all ages
for (i = 0; i < length; i++){
    sum += ages[i];

}

avg = sum / length; //Calculate the avarege ages

printf("The average age is: %2f", avg);

    return (0);
}
