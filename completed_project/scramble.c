#include<stdio.h>
#include<ctype.h>

int main()
{   
    int sum = 0;
    char ch;

    printf("Enter a word: ");
    ch = getchar();

    while (ch != '\n')
    {
        ch = toupper(ch);   //converts the chars to uppercase if nessesary

        switch (ch)
        {
            case 'A':
            case 'E': 
            case 'I': 
            case 'O': 
            case 'U': 
            case 'L': 
            case 'N': 
            case 'R': 
            case 'S': 
            case 'T': 
                sum += 1;
            break;

            case 'D': 
            case 'G': 
                sum += 2;
            break;

            case 'B': 
            case 'C': 
            case 'M': 
            case 'P': 
                sum += 3;
            break;

            case 'F': 
            case 'H': 
            case 'V': 
            case 'W': 
            case 'Y': 
                sum += 4;
            break;

            case 'K': 
                sum += 5;
            break;

            case 'J': 
            case 'X': 
                sum += 8;
            break;

            case 'Q': 
            case 'Z': 
                sum += 10;
            break;

            default:
                sum += 0;
            break;
        }

        ch = getchar();

    }
    printf("scramble value: %d\n" , sum);

    return 0;
}