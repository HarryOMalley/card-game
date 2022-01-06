#include "card.hpp"

class Player
{
private:
    uint16_t _id;
    std::string _name;
    std::vector<Card *> _cards;
    uint16_t _money;

public:
    Player(std::string name);
    ~Player();
    void addCard(Card *card);
    void removeCard(std::string suit, std::string value);
    void removeCard(Card *card);
    void resetHand();
};
