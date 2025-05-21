/*Given an array of integers your solution should find the smallest integer.

For example:

Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, that the supplied array will not be empty.

*/
#include<stdio.h>

int find_smallest_int(const int array[], size_t len){

    int menor = array [0];
    for (size_t i = 1; i < len; i++){
        if (array [i] < menor) {
            menor = array[i];
        }
    }
    return menor;

}

// ...existing code...

int main() {
    int arr1[] = {34, 15, 88, 2};
    int arr2[] = {34, -345, -1, 100};
    int arr3[] = {5};

    printf("Menor valor arr1: %d\n", find_smallest_int(arr1, 4)); // Esperado: 2
    printf("Menor valor arr2: %d\n", find_smallest_int(arr2, 4)); // Esperado: -345
    printf("Menor valor arr3: %d\n", find_smallest_int(arr3, 1)); // Esperado: 5

    return 0;
}