# Programming Challenge – Merlin

Magical Merlin is going to entertain the children in a village with his new magic trick. 
For this, he has some cards with digits from 1 to 9 (he has multiple cards of each digit), 
and a stand with space for three cards side by side, which starts empty. 
Each time Merlin picks a card, he places it on the far right of the stand and shifts the other cards one position to the left. 
If there are no more spaces on the stand, the card furthest to the left goes back into the deck.

The children don’t really understand Merlin’s magic trick, so they come up with their own game:
 1) Merlin must not draw two identical cards in a row — if he does, the game ends.
 2) The number formed by the cards on the stand must be new each time — if it’s been seen before, the game ends.
 3) Each time Merlin draws a card, he earns points equal to the number formed by the cards on the stand.
 4) The oldest child is counting how many cards Merlin has drawn, but cannot see the leftmost card.
    If the number formed by the middle and rightmost cards hasn’t been seen before, the child gives bonus points equal to this number multiplied by the number of cards Merlin has drawn.
 5) The youngest child says she is only 4 years old and therefore doesn’t understand numbers greater than 4, so she asks Merlin to only use cards with digits from 1 to 4.
 
Help Merlin decide which cards to pick so he earns the most points (including bonus points) when the game ends.

If Merlin is going to play the game in another village, the youngest child might be a different age, so he wants to prepare to use cards from 1 to `k`, where `k` can be anything from 2 to 9.

Implement the function `int pick_a_card(int current_number, int cards_drawn, int k)` in [merlin.c](merlin.c), which should tell Merlin which card to pick each time. 
The function knows the current number on the stand, how many cards Merlin has already drawn, and the highest digit `k` that Merlin is allowed to use. 
You can test your function by running the program in [challenge.c](challenge.c). 
Here, `k` is set to 4, but your program should work with different values of `k`. 
What is your high score for each `k` from 2 to 9?

Merlin is allowed to ask the children whether a number has already been seen. He does this by calling the function `int has_seen_number(int number)`.
