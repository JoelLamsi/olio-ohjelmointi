#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int maxnum;
    std::cout << "Please enter a maximum number: ";
    std::cin >> maxnum;

    Game game = Game(maxnum);
    game.play();
    return 0;
}
