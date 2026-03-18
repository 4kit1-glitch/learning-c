// This program implements the julius ceaser cipher

#include<stdio.h>

#define SIZE 80

void encrypt(char [], int key);
void decrypt(char [], int key);
void input(char message[SIZE]);

int main(){
    int choice, i = 0;
    char message[SIZE];

    printf("Enter the sentence");
    message[i] = getchar();

    // getting message:

    while (message[i] != '\n'){
        message[++i] = getchar();
    }
    

    return 0;
}