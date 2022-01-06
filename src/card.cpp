#include "card.hpp"

Card::Card(std::string suit, std::string value)
{
    setSuit(suit);
    setValue(value);
    std::cout << "Created card: " << _value << " of " << _suit << std::endl;
}

Card::~Card()
{
}

void Card::setSuit(std::string suit)
{
    _suit = suit;
}

void Card::setValue(std::string value)
{
    _value = value;
}

std::string Card::getSuit()
{
    return _suit;
}

std::string Card::getValue()
{
    return _value;
}

std::string Card::get()
{
    return _value + " of " + _suit;
}