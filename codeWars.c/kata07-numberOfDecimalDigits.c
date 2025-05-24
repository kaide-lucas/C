#include<stdint.h>

/*Determine the total number of digits in the integer () given as input to the function.
For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits.
Be careful to avoid overflows/underflows.n>=0
All inputs will be valid.*/

int digits(uint64_t n){
    int cont = 1; // starts with 1 because 0 is considered a digit.
    while (n >= 10) // We use 10 in the logic because we are dealing with decimal numbers, the number system that goes from 0 to 9.
    {
        n = n/10;
        cont = cont + 1;
    }

    return cont;
    
}