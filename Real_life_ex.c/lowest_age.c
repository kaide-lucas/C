#include<stdio.h>

int main(){
    int ages[] = {20, 21, 43, 23, 31 };

    int i = 0;

    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for (i = 0; i < length; i++){
            if (lowestAge > ages[i]){
                lowestAge = ages [i];
            }
    }
    printf("%d", lowestAge);

    return (0);
}