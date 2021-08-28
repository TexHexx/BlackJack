#pragma once
#include <string>

class Card {
private:
	std::string _presentation;
	int _value;
public:
	Card(std::string presentation, int value) : _presentation(presentation), _value(value) {};
	std::string getPresentation() { return _presentation; };
	int getValue() { return _value; };
	void setValue(int value) { _value = value; };
};

