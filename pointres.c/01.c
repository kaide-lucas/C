#include<stdio.h>
#include<windows.h>


int main() {
    int myNumbers[4] = {25,50, 75, 100};
    int i=0;

    for (i=0; i<4; i++){
        printf("%p\n", &myNumbers[i]); // Print address of each element
        Sleep(1000); // Sleep for 1 second

        printf("%d\n", *myNumbers);// Print value of first element
        Sleep(1000);
        printf("%d\n", *(myNumbers+1));// Print value of second element
        Sleep(1000);
        printf("%d\n", *(myNumbers+2));// Print value of third element
        Sleep(1000);
        printf("%d\n", *(myNumbers+3));// Print value of fourth element
        Sleep(1000);

        *myNumbers = 13; // Change value of first element
        printf("%d\n", *myNumbers);// Print value of first element after change
        Sleep(1000);

        return 0;
    }
}