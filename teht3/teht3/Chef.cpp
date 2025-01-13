#include "Chef.h"
using namespace std;
Chef::Chef(string n)
{
    cout << "Creating Chef object with name: " << n << endl;
    chefName = n;
}

Chef::~Chef()
{
    cout << "Removing Chef object with name: " << chefName << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingrediences)
{
    cout << "Calling function makeSalad with parameter ingrediences: " << ingrediences << endl;
    int salads = ingrediences / 5;
    cout << "Can prepare " << salads << " salads" << endl;
    return salads;
}

int Chef::makeSoup(int ingrediences)
{
    cout << "Calling function makeSoup with parameter ingrediences: " << ingrediences << endl;
    int soups = ingrediences / 3;
    cout << "Can prepare " << soups << " soups" << endl;
    return soups;
}
