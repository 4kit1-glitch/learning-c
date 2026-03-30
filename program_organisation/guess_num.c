// Program ask's user to guess a secret number

#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;  //number to guess

void front_end();
void initialize_number_generator();
void get_secret_number();
void read_guesses();


int main() {

    return 0;
}

void front_end() {
    char response;
    initialize_number_generator();
    printf("Guess a number between 1 and %d\n", MAX_NUMBER);

    do {
        get_secret_number();
        printf("A new number has been chosen\n");
        read_guesses();

        printf("Play again(y or n): ");
        response = getchar();
        putchar('\n');
    } while (tolower(response) == 'y');
}

void initialize_number_generator() {
    srand((unsigned) time(NULL));
}
void get_secret_number() {
    secret_number = 1 + rand() % MAX_NUMBER;
}
void read_guesses() {
    int num_guesses, guess;

    num_guesses = 0;
    while (1) {
        num_guesses++;

        printf("Enter a guess: ");
        scanf(" %d", &guess);

        if (guess == secret_number) {
            printf("You guessed the number correctly in %d tries", num_guesses);
            return;
        } else if (guess < secret_number) {
            printf("Guess to low try again\n");
        } else {
            printf("Guess too high try again\n");
        }
    }
}