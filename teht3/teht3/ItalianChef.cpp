#include "ItalianChef.h"
ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout << "Creating ItalianChef object with name: " << n << endl;
    chefName = n;
}


ItalianChef::~ItalianChef()
{
    cout << "Removing ItalianChef object with name: " << chefName << endl;
}

bool ItalianChef::askSecret(string p, int f, int w)
{
    if (password.compare(p))
    {
        cout << "Correct password!" << endl;
        makePizza(f, w);
        return true;
    } else
    {
        cout << "Incorrect password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int f, int w)
{
    cout << "Calling function makePizza with parameter ingrediences: f - " << f << ", w - " << w << endl;
    int maxPizza = min(f, w);
    int pizzas = maxPizza / 5;
    cout << "Can prepare " << pizzas << " pizzas" << endl;
    return pizzas;
}
