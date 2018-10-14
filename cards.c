/* Functions for dealing with the handling of the cards in video poker */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* structure definition for a deck of cards */
struct card {
	int value;
	int suit;
	int hold;
};

enum { HEART, DIAMOND, CLUB, SPADE, YES, NO };

/* deal:  This function takes a structure of cards as input and randomly populates the deck with new cards.  This checks to see if the cards are held and if they are duplicates too. */
void deal(struct card *deck, int size)
{
	int i;

	srand(time(0));

	for(i = 0; i < size; i++)
	{
		/* if card is not held generate a new card on function call */
		if(deck[i].hold == NO)
		{
			while((deck[i].value = rand() / (RAND_MAX / 13)) <= 1);
			
			while((deck[i].suit = rand() / (RAND_MAX / 4)) == 0);
		}

		/* check for duplicate card */
		
	}
}
