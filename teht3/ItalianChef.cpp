
#include "ItalianChef.h"
using namespace std;

ItalianChef::ItalianChef(string fullname) : Chef(fullname)
{
    cout << "Creating object ItalianChef with name of: " << fullname << endl;
    chefName = fullname;
}

ItalianChef::~ItalianChef()
{
    cout << "Removing object ItalianChef with name of: " << chefName << endl;
}

bool ItalianChef::askSecret(string p, int f, int w)
{
    if (p == password)
    {
        cout << "Inserted password correct!" << endl;
        makePizza(f, w);
        return true;
    } else
    {
        cout << "Inserted password incorrect!" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int f, int w)
{
    cout << "makeSoup function called with parameter: f - " << f << ", w - " << w << endl;
    int maxFlour = f / 5;
    int maxWater = w / 5;

    int pizzas = min(maxFlour, maxWater);

    cout << "can make " << pizzas << " pizzas" << endl;
    return pizzas;
}
