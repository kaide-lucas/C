#include<stdio.h>

int main() {
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;
    printf("Before swap: a = %d, b = %d\n", a, b);
    // Swap using pointers
        int temp = *p1; // Store the value of 'a' in temp
        *p1 = *p2;      // Assign the value of 'b' to 'a'
        *p2 = temp;     // Assign the original value of 'a' (stored in temp) to 'b'
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
// Output: 
// Before swap: a = 5, b = 10
// After swap: a = 10, b = 5
// This code demonstrates how to swap two integers using pointers in C.

