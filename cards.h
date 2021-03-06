/* cards.h:  Contains function prototypes and variables for a video poker game */

/* Card information */
struct card {
	int value;
	int suit;
	int hold;
};

void deal(struct card *, int);
void unhold(struct card *, int);
void hold(struct card *, int);
int inithand(struct card *, int);

enum { HEARTS, DIAMONDS, CLUBS, SPADES, YES, NO };
