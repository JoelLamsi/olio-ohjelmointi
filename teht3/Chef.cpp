#include "Chef.h"
using namespace std;

Chef::Chef(string fullname)
{
    cout << "Creating object Chef with name of: " << fullname << endl;
    chefName = fullname;
}

Chef::~Chef()
{
    cout << "Removing object Chef with name of: " << chefName << endl;
}

string Chef::getName()
{
    cout << "Returning chefname" << endl;
    return chefName;
}

int Chef::makeSalad(int ingrediences)
{
    cout << "makeSalad function called with parameter: " << ingrediences << " ingrediences" << endl;
    int salads = ingrediences / 5;
    cout << "can prepare " << salads << " salads" << endl;
    return salads;
}

int Chef::makeSoup(int ingrediences)
{
    cout << "makeSoup function called with parameter: " << ingrediences << " ingrediences" << endl;
    int soups = ingrediences / 3;
    cout << "can prepare " << soups << " soups" << endl;
    return soups;
}
