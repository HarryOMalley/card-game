#include <iostream>
// #include "deck.hpp"
#include "game.hpp"

int main()
{
    std::cout << "I am going to be a card game" << std::endl;
    // Card *testCard = new Card("Diamond", "King");
    // std::string testCardSuit = testCard->getSuit();
    // std::string testCardValue = testCard->getValue();
    // std::cout << testCardValue << " of " << testCardSuit << std::endl;
    // Deck *testDeck = new Deck();
    // testDeck->createDeck();
    // testDeck->shuffle();
    // testDeck->shuffle();
    // Deck *test2Deck = new Deck(std::vector<std::string>{"Harry", "Jason"});
    Game *main_game = new Game(4);
    main_game->start();
}