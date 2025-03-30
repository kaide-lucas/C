#include<stdio.h>

//Calculates the average of a different ages:
int main(){
int ages[] = {20, 30, 47, 23, 34, 28};

float avg, sum = 0;
int i;

int length = sizeof(ages) / sizeof(ages[0]);

for (i = 0; i < length; i++){
    sum +=ages[i];

}

avg = sum / length;

printf("The average age is: %2f", avg);

    return (0);
}
