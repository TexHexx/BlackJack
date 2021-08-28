#include "Player.h"

std::string Player::getHandPresentation(bool endGame) {
	std::string result = "(";
	for (int i = 0; i < _handAmount; i++) {
		if ((!endGame) && (i == 0) && (_isDealer))
			result += " *";
		else
			result += " " + _hand[i]->getPresentation();
	}
	result += " )";
	return result;
};

int Player::getHandValue() {
	int ace_position = -1;
	int result = 0;
	for (int i = 0; i < _handAmount; i++) {
		if ((_hand[i]->getPresentation()[0] == 'A') && (_hand[i]->getValue() == 11) && (ace_position == -1))
			ace_position = i;
		result += _hand[i]->getValue();
	}
	if ((result > 21) && (ace_position > -1)) {
		_hand[ace_position]->setValue(1);
		return getHandValue();
	}
	return result;
};

bool Player::getCard(CardDeck* deck) {
	Card* got_card = deck->getDeckCard();
	if (got_card == NULL)
		return false;
	_hand[_handAmount++] = got_card;
	return true;
};