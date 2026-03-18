#include<stdio.h>
#include<ctype.h>

int main(){
    int num = 1;
    char txt = 'r' ;

    if(isalnum(txt)){
        printf("as expected: %c \n", toupper(txt));
    }
    else{
        printf("hello\n");
    }




    return 0;
}