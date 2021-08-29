#pragma once
#include "Card.h"

class CardDeck {
public:
	static int const FULL_DECK_SIZE = 52;
	CardDeck();
	~CardDeck() { 
		for(int i=0;i<FULL_DECK_SIZE;i++)
			delete _deck_cards[i]; 
	};
private:
	Card* _deck_cards[FULL_DECK_SIZE];
	int _deck_size = FULL_DECK_SIZE;
	Card* getDeckCard();

	friend class Player;
};
