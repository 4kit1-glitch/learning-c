#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define SIZE 26

void input(char word1[], char word2[]);
int word_lenght(char word[]);
bool is_anagram1(int freq_arr[]);
int frequency(char word1[], char word2[], int freq_arr[]);

int main(){
    char word1[50];
    char word2[50];
    int freq_arr[SIZE] = {0};

    input(word1, word2);
    
    return 0;
}

void input(char word1[], char word2[]){
    char ch;
    int i = 0;
    int j = 0;

    printf("enter the first word: ");
    ch = getchar();

    while(ch != '\n'){
        word1[i] = tolower(ch);
        ch = getchar();
        i++;
    }

    printf("enter the second word: ");
    ch = getchar();
    
    while(ch != '\n'){
        word2[j] = tolower(ch);
        ch = getchar();
        j++;
    }

}
int word_lenght(char word[]){
    int lenght = 0;
    for(int i = 0; ; i++){
        if(word[i] == '\0'){
            break;
        }
        lenght++;
    }
    return lenght;
}
int frequency(char word1[], char word2[], int freq_arr[]){
    int lenght1 = word_lenght(word1);
    int lenght2 = word_lenght(word2);
    char alphabets[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f',
                            'g', 'h', 'i', 'j', 'k', 'l', 
                            'm', 'n', 'o', 'p', 'q', 'r', 
                            's', 't', 'u', 'v', 'w', 'x', 
                            'y', 'z'};
    
    for(int i = 0; i < lenght1; )
    

}
bool is_anagram1(int freq_arr[]){
    for(int i = 0; i < SIZE; i++){
        if(freq_arr[i] != 0){
            return false;
        }
    }
    return true;
}
