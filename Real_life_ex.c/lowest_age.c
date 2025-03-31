#include<stdio.h>

int main(){
    int ages[] = {18, 20, 21, 43, 23, 31 }; //age list

    int i = 0; //loop count

    int length = sizeof(ages) / sizeof(ages[0]); //Calculate ages have on list

    int lowestAge = ages[0]; //Surposed that the first age is lower 

    //loop for find the lower age:
    for (i = 0; i < length; i++){
            if (lowestAge > ages[i]){
                lowestAge = ages [i];
            }
    }
    printf("The lowest age is: %d years", lowestAge);

    return (0);
}