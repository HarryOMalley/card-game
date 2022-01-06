#include "game.hpp"

Game::Game(uint8_t num_decks)
{
    _deck = new Deck();
}

Game::~Game()
{
}

void Game::start()
{
    //start the game
    std::cout << "Starting Blackjack!" << std::endl;

    while (true)
    {

        // exit game

        int test;
        std::cin >> test;
    }
}

void Game::join(std::string name)
{
    Player *newPlayer = new Player(name);
    _players.push_back(newPlayer);
}

void Game::preGame()
{
}