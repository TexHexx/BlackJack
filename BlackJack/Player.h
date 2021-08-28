#pragma once
#include "CardDeck.h"

class Player {
private:
	Card* _hand[CardDeck::FULL_DECK_SIZE];
	int _handAmount = 0;
	bool _isDealer;
public:
	~Player() { delete[] _hand; };
	explicit Player(bool isDealer = false) : _isDealer(isDealer) { };
	std::string getHandPresentation(bool endGame = false);
	int getHandValue();
	bool getCard(CardDeck* deck);
	bool getIsDealer() { return _isDealer; };
};

