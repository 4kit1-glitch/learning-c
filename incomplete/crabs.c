// simulates a game of crabs

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#include<time.h>



bool play_game(void);
int roll_dice(void);

int main() {
    play_game();
    return 0;
}

int roll_dice() {
    int first_dice, second_dice, sum;

    srand((unsigned) time(NULL));

    first_dice = 1 + rand() % 6;
    second_dice = 1 + rand() % 6;
    sum = first_dice + second_dice;

    return sum;
}
bool play_game(void) {
    int point, roll_count, win_count, loss_count, sum;
    char responce;
    bool is_playing = true;

    sum = 0;
    win_count = 0;
    loss_count = 0;

    while (is_playing) {
        roll_count = 0;

        do {
            sum = roll_dice();
            roll_count++;

            printf("You rolled: %d\n", sum);

            if (roll_count == 1) {
                if (sum == 7 || sum  == 11) {
                    printf("you win\n");
                    win_count++;
                    break;
                }
                else if (sum == 2 || sum == 3 || sum == 12) {
                    printf("you lose\n");
                    loss_count++;
                    break;
                }
                else {
                    sum = roll_dice();  //redundant code
                    roll_count++;
                }
            }

            if (roll_count == 2) {
                point = sum;
                printf("Your point is: %d\n", point);

                sum = roll_dice();
                roll_count++;

                printf("you rolled: %d\n", sum);
            }
        
            if (sum == point) {
                printf("you win\n");
                win_count++;
                break;
            }
            else if (sum == 7) {
                printf("you lose: ");
                loss_count++;
                break;
            }
            else {
                continue;
            }
        }
        while (true);
        
        printf("Do you wanna play again(y/n): ");
        responce = getchar();

        if (tolower(responce) != "y") {
            is_playing = false;
        }
    }
    printf("wins: %d, losses: %d\n", win_count, loss_count);
}