#include<stdio.h>
#include<string.h> 

//Functions basics for strings:
int main(){

    //char *menssager = "Bom dia";

    //strlen():
    char text[] = "Helo, good morning!";
    char length = strlen(text);

    printf("%d\n", length);

    // strcpy():
    char origin[] = "Phrase for copy";
    char destiny[50];

    strcpy(destiny, origin); 
    
    printf("%s\n", origin);

    // loop:
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; i++){
        printf("%c\n", carName[i]);
    }

    char message[] = "Good to see you";
    char fname[] = "Jhon";

    printf("%s %s!", message, fname);


    return (0);
}

