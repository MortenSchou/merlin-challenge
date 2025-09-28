#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "challenge.h"
#include "merlin.h"

int valid_card(int card);
int cards_to_number(int card1, int card2, int card3);

static int numbers_seen[1000];
static int bonus_numbers_seen[100];


int main() {
    srand((unsigned)time(0));

    const int k = 4;
    int card1 = 0, card2 = 0, card3 = 0, score = 0, round = 1;
    do {
        printf("Round %3d:  ", round);

        // Pick a card
        int card = pick_a_card(cards_to_number(card1, card2, card3), k);
        if (card <= 0 || card > k) {
            if (card == 0) {
                printf("Picked 0 to end the performance\n");
            } else if (card > k && card <= 9) {
                printf("Picked %d, but you cannot use cards larger than %d (k)!\n", card, k);
            } else {
                printf("Picked an invalid card: %d\n", card);
            }
            break;
        }
        printf("Picked %d", card);
        if (card == card3) {
            printf(" again. We don't want the same card twice in a row!\n");
            break;
        }

        // Insert the new card and move other cards over.
        card1 = card2;
        card2 = card3;
        card3 = card;

        // Check new number
        int number = cards_to_number(card1, card2, card3);
        assert(number < 1000);
        if (has_seen_number(number)) {
            printf(", but we have already seen the number %03d\n", number);
            break;
        }
        numbers_seen[number] = 1;

        // Award points
        score += number;
        printf(" and scores %03d points", number);
        // Award bonus points
        int bonus_number = number%100;
        if (!bonus_numbers_seen[bonus_number]) {
            bonus_numbers_seen[bonus_number] = 1;
            score += round * bonus_number;
            printf(" and %3d * %02d = %3d bonus points", round, bonus_number, round * bonus_number);
        }
        printf("\n");
        round++;
    } while (1);

    printf("Final score: %d\n", score);
}

int valid_card(int card) {
    return card >= 0 && card <= 9;
}

int cards_to_number(int card1, int card2, int card3) {
    assert(valid_card(card1) && valid_card(card2) && valid_card(card3));
    return 100 * card1 + 10 * card2 + card3;
}

int has_seen_number(int number) {
    return numbers_seen[number];
}
