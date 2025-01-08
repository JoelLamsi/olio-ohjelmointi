#include "Game.h"
#include <ctime>
Game::Game(int _maxNumber)
{
    std::cout << "Constructing new game object with maxNumber = " << _maxNumber << std::endl;
    maxNumber = _maxNumber;
    std::srand(std::time(0));
    randomNumber = std::rand() % (maxNumber+1);
    playerGuess = 0;
    numOfGuesses = 0;
    std::cout << "Guess a number between 1-" << maxNumber << std::endl;
}

Game::~Game()
{
    std::cout << "Destructing game object and clearing from memory" << std::endl;
}

void Game::play()
{
    while (true)
    {
        std::cout << "Please input a guess: ";
        std::cin >> playerGuess;
        numOfGuesses += 1;
        if (playerGuess < randomNumber)
        {
            std::cout << "The correct number is higher" << std::endl;
        } else if (playerGuess > randomNumber)
        {
            std::cout << "The correct number is lower" << std::endl;
        } else
        {
            break;
        }
    }

    printGameResult();
}

void Game::printGameResult(void)
{
    std::cout << "Correct! " << randomNumber << " was the right number." << std::endl;
    std::cout << "You guessed correct in " << numOfGuesses << " attempts" << std::endl;
}

