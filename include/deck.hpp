#include <stdint.h>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "card.hpp"

class Deck
{
private:
    std::default_random_engine _rng;
    uint8_t _deck_size = 52;
    uint8_t _num_decks = 1;
    std::vector<Card *> _cards;
    std::vector<std::string> _card_suits;
    std::vector<std::string> _card_values;
    std::vector<std::string> _default_suits = {
        "Hearts",
        "Clubs",
        "Spades",
        "Diamonds"};
    std::vector<std::string> _default_values = {
        "Ace",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
        "Ten",
        "Jack",
        "Queen",
        "King"};

public:
    Deck();
    ~Deck();
    void createDeck();
    void resetDeck();
    void setDeckSize(uint8_t deck_size);
    void setNumDecks(uint8_t num_decks);
    void setSuits(std::vector<std::string> card_suits);
    void setValues(std::vector<std::string> card_values);
    void shuffle();
    std::vector<Card *> getDeck();
    Card *getTopCard();
};