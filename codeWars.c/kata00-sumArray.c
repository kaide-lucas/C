/*
Write a function that takes an array of numbers and returns the sum of the numbers.
The numbers can be negative or non-integer.
If the array does not contain any numbers then you should return 0.

Examples
Input: [1, 5.2, 4, 0, -1]
Output: 9.2

Input: []
Output: 0

Input: [-2.398]
Output: -2.398

Assumptions
You can assume that you are only given numbers.
You cannot assume the size of the array.
You can assume that you do get an array and if the array is empty, return 0.
What We're Testing
We're testing basic loops and math operations.
This is for beginners who are just learning loops and math operations.
Advanced users may find this extremely easy and can easily write this in one line.
*/

#include<stddef.h>// For use size_t.
#include<stdio.h>

int sum_array(const int*values, size_t count){
    int sum = 0;
    for (size_t i = 0; i < count; i++){
        sum += values[i];
    }
    return sum;
}

int main() {
    int arr1[] = {1, 5, 4, 0, -1};
    int arr2[] = {};
    int arr3[] = {-2};

    printf("Sum 1: %d\n", sum_array(arr1, 5)); // Espected: 9
    printf("Sum 2: %d\n", sum_array(arr2, 0)); // Espected: 0
    printf("Sum 3: %d\n", sum_array(arr3, 1)); // Espected: -2

    return 0;
}