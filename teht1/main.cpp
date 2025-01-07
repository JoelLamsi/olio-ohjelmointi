#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum)
{
    std::srand(std::time(0));
    int randomNumber = std::rand() % 21;

    int guess = 0;
    int attempts = 0;

    std::cout << "Guess a number between 1-" << maxnum << std::endl;

    while(true)
    {
        std::cout << "Please input your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber)
        {
            std::cout << "The correct number is higher" << std::endl;
        } else if (guess > randomNumber)
        {
            std::cout << "The correct number is lower" << std::endl;
        } else {
            std::cout << "Correct! " << randomNumber << " was the right number." << std::endl;
            break;
        }
    }

    return attempts;
}

int main()
{
    int maxnum;
    std::cout << "Please enter a maximum number: ";
    std::cin >> maxnum;

    int attempts = game(maxnum);
    std::cout << "You guessed correct in " << attempts << " attempts" << std::endl;
    return 0;
}
