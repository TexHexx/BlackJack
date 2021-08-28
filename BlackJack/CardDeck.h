#pragma once
#include "Card.h"

class CardDeck {
public:
	static int const FULL_DECK_SIZE = 52;
	CardDeck();
	~CardDeck() { delete[] _deck_cards; };
private:
	Card* _deck_cards[FULL_DECK_SIZE];
	int _deck_size = FULL_DECK_SIZE;
	Card* getDeckCard();

	friend class Player;
};
