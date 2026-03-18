// Program deals a single hand to the user it takes the number of cards per hand

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main()
{   
    srand((unsigned)(time(NULL)));  // Random number generator initializer
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    const char suit_code[NUM_SUITS] = {'c','d','h','s'};
    const char rank_code[NUM_RANKS] = {'1','2','3','4','5','6','7',
                                        '8','9','t','j','Q','K'};   // t represents 10 because char cant store 10
    
    int num_cards,suit,rank;

    printf("Enter the number of cards to deal");
    scanf("%d", &num_cards);

    printf("your hand: ");

    while(num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if(!(in_hand[suit][rank]))
        {
            in_hand[suit][rank] = true;
            num_cards--;

            printf(" %c%c ",rank_code[rank],suit_code[suit]);

        }

    }

    printf("\n");

    return 0;
}