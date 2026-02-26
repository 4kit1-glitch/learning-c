// this program counts the number of vowels in a sentence

#include<stdio.h>

int main()
{
    char ch;
    int vowel_count = 0;

    printf("Enter the sentence: ");
    ch = getchar();

    while(ch != '\n')
    { 

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            switch (ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowel_count ++;
                    break;

                default:break;
            }
        }

        ch = getchar();
    
    }

    printf("sentence contains %d vowel\n",vowel_count);
    return 0;
}