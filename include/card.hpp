#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>

class Card
{
private:
    std::string _suit;
    std::string _value;
    void setSuit(std::string suit);
    void setValue(std::string value);

public:
    Card(std::string suit, std::string value);
    ~Card();
    std::string getSuit();
    std::string getValue();
    std::string get();
};

#endif