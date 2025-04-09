#include<stdio.h>
#include<string.h>

int main() {
    // String length
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // strlen: Returns the length of the string excluding the null terminator
    printf("%d\n", strlen(alphabet));

    // sizeof: Returns the total size of the array including the null terminator
    printf("%d\n", sizeof(alphabet));

    // strcat():
    char str1[40] = "The winter is coming";
    char str2[] = "the north wait";

    // Check for buffer overflow before concatenation
    if (strlen(str1) + strlen(str2) < sizeof(str1)) {
        strcat(str1, str2);
    } else {
        printf("Error: Not enough space to concatenate strings.\n");
        return 1; // Exit with error code
    }

    // Print the concatenated string
    printf("%s\n", str1);

    return 0;
}

