#include "CardDeck.h"
#include <algorithm>
#include <time.h>

CardDeck::CardDeck() {
	_deck_cards[0] = new Card("AS", 11);
	_deck_cards[1] = new Card("2S", 2);
	_deck_cards[2] = new Card("3S", 3);
	_deck_cards[3] = new Card("4S", 4);
	_deck_cards[4] = new Card("5S", 5);
	_deck_cards[5] = new Card("6S", 6);
	_deck_cards[6] = new Card("7S", 7);
	_deck_cards[7] = new Card("8S", 8);
	_deck_cards[8] = new Card("9S", 9);
	_deck_cards[9] = new Card("10S", 10);
	_deck_cards[10] = new Card("JS", 10);
	_deck_cards[11] = new Card("QS", 10);
	_deck_cards[12] = new Card("KS", 10);
	_deck_cards[13] = new Card("AH", 11);
	_deck_cards[14] = new Card("2H", 2);
	_deck_cards[15] = new Card("3H", 3);
	_deck_cards[16] = new Card("4H", 4);
	_deck_cards[17] = new Card("5H", 5);
	_deck_cards[18] = new Card("6H", 6);
	_deck_cards[19] = new Card("7H", 7);
	_deck_cards[20] = new Card("8H", 8);
	_deck_cards[21] = new Card("9H", 9);
	_deck_cards[22] = new Card("10H", 10);
	_deck_cards[23] = new Card("JH", 10);
	_deck_cards[24] = new Card("QH", 10);
	_deck_cards[25] = new Card("KH", 10);
	_deck_cards[26] = new Card("AC", 11);
	_deck_cards[27] = new Card("2C", 2);
	_deck_cards[28] = new Card("3C", 3);
	_deck_cards[29] = new Card("4C", 4);
	_deck_cards[30] = new Card("5C", 5);
	_deck_cards[31] = new Card("6C", 6);
	_deck_cards[32] = new Card("7C", 7);
	_deck_cards[33] = new Card("8C", 8);
	_deck_cards[34] = new Card("9C", 9);
	_deck_cards[35] = new Card("10C", 10);
	_deck_cards[36] = new Card("JC", 10);
	_deck_cards[37] = new Card("QC", 10);
	_deck_cards[38] = new Card("KC", 10);
	_deck_cards[39] = new Card("AD", 11);
	_deck_cards[40] = new Card("2D", 2);
	_deck_cards[41] = new Card("3D", 3);
	_deck_cards[42] = new Card("4D", 4);
	_deck_cards[43] = new Card("5D", 5);
	_deck_cards[44] = new Card("6D", 6);
	_deck_cards[45] = new Card("7D", 7);
	_deck_cards[46] = new Card("8D", 8);
	_deck_cards[47] = new Card("9D", 9);
	_deck_cards[48] = new Card("10D", 10);
	_deck_cards[49] = new Card("JD", 10);
	_deck_cards[50] = new Card("QD", 10);
	_deck_cards[51] = new Card("KD", 10);
	std::srand(time(0));
	std::random_shuffle(std::begin(_deck_cards), std::end(_deck_cards));
};

Card* CardDeck::getDeckCard() {
	if (_deck_size > 0)
		return _deck_cards[--_deck_size];
	return NULL;
};