/* this program solves expressions entered by the user
*  it solves from left to right so the calculations may be wrong 
*  this means no precedence exist 
*  
*/

#include<stdio.h>

int main()
{   
    float operand1 ,operand2, result = 0.0;
    char operator,ch;     // ch refers to the individual character selector

    printf("enter an expression: ");
    scanf("%f",&operand1);

    for(;;)
    {
        scanf("%c" , &ch);
    
        if(ch == '\n')
        {
            break;
        }

        else if(ch == '+' || ch == '-' || ch == '*'|| ch == '/')
        {
            operator = ch;
            scanf("%f",&operand2);

            switch (operator)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            
            default:
                break;
            }
            
            operand1 = result; 

        }

    }

    printf("the result of the expression is: %.2f\n", operand1);



    return 0;
}