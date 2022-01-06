#include "deck.hpp"
#include "player.hpp"

class Game
{
private:
    /* data */
    Deck *_deck;
    std::vector<Player *> _players;
    void join(std::string userId);
    void leave(std::string userId);
    void hit(std::string userId);
    void stick(std::string userId);

public:
    Game(uint8_t num_decks);
    ~Game();
    void start();
    void stop();
};
