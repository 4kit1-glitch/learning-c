// this program reverses strings

#include<stdio.h>

#define SIZE ((int) sizeof(message) / sizeof(message[0]))

int main()
{

    char message[50];
    char reversed_message[50];
    char ch, terminating_char;
    int i,j;

    printf("enter a message");
    ch = getchar();

    i = 0;
    while(ch != '\n'){
        if(ch == '!' || ch == '.' || ch == '?'){
            terminating_char = ch;
            continue;
        }
        message[i] = ch;
        ch = getchar();
        i++;
    }

    for(int i = (SIZE - 1), j = 0; ;i--, j++){
        reversed_message[j] = message[i];
        if(reversed_message[j] == '\n'){
            break;
        }
    }

    

    return 0;
}