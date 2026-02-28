// this program formats a string to fit a users understanding

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE ((int) (sizeof(message)) / (sizeof(message[0])))

int main(void)
{   
    char message[50];
    char diff_message[50];
    char ch;

    printf("Enter the message: ");
    ch = getchar();

// Getting message
    for(int i = 0; ; i++){
        if(ch == '\n'){
            message[i] = '.';
            break;
        }

        message[i] = ch;
        ch = getchar();

    }
// Translating
    for(int i = 0; ; i++){
        if(message[i] == '.'){
            diff_message[i] = toupper(message[i]);
            break;
        }
        diff_message[i] = toupper(message[i]);

        switch (diff_message[i]){
            case 'A': diff_message[i] = '4'; break;
            case 'E': diff_message[i] = '3'; break;
            case 'I': diff_message[i] = '1'; break;
            case 'O': diff_message[i] = '0'; break;
            case 'S': diff_message[i] = '5'; break;
        
            default:break;
        }
    
    }

    printf("diff's message: ");

    for(int i = 0; ; i++){
        if(diff_message[i] == '.'){
            break;
        }
        printf("%c", diff_message[i]);
    }
    printf("!!!!!!!!!!\n");




    return 0;
}