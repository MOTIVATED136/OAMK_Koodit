#ifndef GAME_H
#define GAME_H

class Game
{
private:
    int maxNumber;
    int randomNumber;
    int guesses;

public:
    Game(int maxNumber);
    void play();
    void printGameResult();
};

#endif
