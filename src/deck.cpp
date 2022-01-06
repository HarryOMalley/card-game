#include "deck.hpp"

Deck::Deck()
{
    // setting suits and values to the default, can be overwritten
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    _rng = std::default_random_engine(seed);
    _card_suits = _default_suits;
    _card_values = _default_values;
}

void Deck::createDeck()
{
    // why two ampersand?
    for (auto &&suit : _card_suits)
    {
        for (auto &&value : _card_values)
        {
            Card *card = new Card(suit, value);
            _cards.push_back(card);
        }
    }
    std::cout << "Deck created" << std::endl;
    return;
}

void Deck::resetDeck()
{
    _cards.clear();
}

void Deck::setNumDecks(uint8_t num_decks)
{
    _num_decks = num_decks;
}

void Deck::setSuits(std::vector<std::string> card_suits)
{
    _card_suits = card_suits;
    return;
}

void Deck::setValues(std::vector<std::string> card_values)
{
    _card_values = card_values;
    return;
}

void Deck::shuffle()
{
    // shuffle the deck
    std::shuffle(_cards.begin(), _cards.end(), _rng);

    for (auto &x : _cards)
        std::cout << ' ' << x->get() << std::endl;
    std::cout << std::endl;
}

std::vector<Card *> Deck::getDeck()
{
    return _cards;
}

Card *Deck::getTopCard()
{
    Card *topCard = _cards.back();
    _cards.pop_back();
    return topCard;
}

Deck::~Deck()
{
}
