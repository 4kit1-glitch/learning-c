// program formats a users name 

#include<stdio.h>

int main()
{
    char ch , initial;

    printf("Enter your name: ");
    ch = getchar();

    initial = ch;

    while(ch != '\n')
    {

        if(ch == ' ')
        {
            ch = getchar();

            while(ch != '\n')
            {
                printf("%c",ch);
                ch = getchar();
            }

            continue;
        }
        else
        {
             ch = getchar();
        }
      
    }

    printf(", %c.\n",initial);
    
    return 0;
}