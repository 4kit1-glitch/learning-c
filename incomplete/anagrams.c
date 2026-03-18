#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define SIZE 26

bool is_anagram(char [], char [], int lenght1, int lenght2);

int main(){
    char word1[50];
    char word2[50];
    char ch;
    bool test;
    
    printf("enter the first word: ");
    ch = getchar();
    
    int i = 0;
    while(true){
        word1[i] = tolower(ch);
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        i++;
    }
    
    printf("enter the second word: ");
    ch = getchar();
    
    int j = 0;
    while(true){
        word2[j] = tolower(ch);
        ch = getchar();
        if(ch == '\n'){
            break;
        }
    }
    
    test = is_anagram(word1, word2, i, j);
    
    if(test){
        printf("\n anagrams \n");
    }
    else{
        printf("\n not anagrams\n");
    }
    
    return 0;
    
}

bool is_anagram(char word1[], char word2[], int lenght1, int lenght2){
    int frequency[SIZE] = {0};
    char alphabets[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f',
                            'g', 'h', 'i', 'j', 'k', 'l', 
                            'm', 'n', 'o', 'p', 'q', 'r', 
                            's', 't', 'u', 'v', 'w', 'x', 
                            'y', 'z'};
    
    if(lenght1 != lenght2){
        return false;
    }
    for(int i = 0; i < lenght1; i++){
        for(int j = 0; j < SIZE; j++){
            if(word1[i] == alphabets[j]){
                frequency[j]++;
            }
        }
    }    
    for(int i = 0; i < lenght2; i++){
        for(int j = 0; j < SIZE; j++){
            if(word2[i] == alphabets[j] && frequency[j] != 0){
                frequency[j]--;
            }
            else{
                return false;
            }
        }
    }
    for(int i = 0; i < SIZE; i++){
        if(frequency[i] != 0){
            return false;
        }
    }
    return true;
    
}for(int i = 0; i < SIZE; i++){
        if(frequency[i] != 0){
            return false;
        }
    }
    return true;
    
}rue;
    
}