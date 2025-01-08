#include <iostream>
#ifndef GAME_H
#define GAME_H
class Game
{
public:
    Game(int);
    ~Game(void);
    void play(void);
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult(void);
};

#endif // GAME_H
