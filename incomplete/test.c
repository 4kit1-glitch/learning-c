#include<stdio.h>

int main(){
    char txt[10] = {'h'};

    for(int i = 0; i < 10; i++){
        printf("%c", txt[i]);
    }
    printf("%c, %c", txt[0], txt[1]);

    return 0;
}