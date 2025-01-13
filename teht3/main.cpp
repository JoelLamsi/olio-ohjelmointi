#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef("Gordon");
    chef.makeSalad(26);
    chef.makeSoup(12);

    ItalianChef italianChef("Luigi");
    italianChef.makeSalad(20);
    italianChef.makeSoup(9);

    italianChef.askSecret("pizza", 25, 20);
    italianChef.askSecret("incorrect", 25, 20);
    return 0;
}
