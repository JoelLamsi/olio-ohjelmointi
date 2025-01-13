#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef chef("Ramsay");
    chef.makeSalad(30);
    chef.makeSoup(20);

    ItalianChef italianChef("Luigi");
    italianChef.makeSalad(43);
    italianChef.makeSoup(52);
    italianChef.askSecret("pizza", 30, 20);
    italianChef.askSecret("wrong", 30, 20);
    return 0;
}
