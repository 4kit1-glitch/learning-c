//analyses a hand in poker and prints the result

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define NUM_CARDS 5

int rank_num[NUM_RANKS];
int suit_num[NUM_SUITS];
int pair, flush, straight, flush, two, three;

void read_cards();
void analize_cards();
void print_results();

int main() {
    for (;;) {
        read_cards();
        analize_cards();
        print_results();
    }
    return 0;
}

void read_cards() {
    bool is_card_repeated[NUM_RANKS][NUM_SUITS];
    bool bad_card;

    
}
