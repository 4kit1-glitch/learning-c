#include<stdio.h>

#define SIZE (i + 1)

int main(){
    int shift_num;
    char message[80];
    char ch , modified;
    
    printf("Enter the message: ");
    ch = getchar();
    
    int i = 0;
    while(ch != '\n'){
        message[i] = ch;
        ch = getchar();
        i++;
        
        if(i > 80){
            break;
        }
    }
    
    printf("enter the shift amount(0-25): ");
    scanf("%d", &shift_num);
    
    for(int j = 0; j < SIZE; j++){
        ch = message[j];
        if('a' <= ch && ch <= 'z'){
            modified = (((ch - 'a') + shift_num) % 26 + 'a');
        }
        else if('A' <= ch && ch <= 'Z'){
            modified = (((ch - 'A') + shift_num) % 26 + 'A');
        }
        else{
            modified = ch;
        }
        message[j] = modified;
    }
    printf("encrypted message: ");
    for(int j = 0; j < SIZE; j++){
        printf("%c",message[j]);
    }
    printf("\n");
    
    return 0;
}