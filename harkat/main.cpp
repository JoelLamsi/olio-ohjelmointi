#include <iostream>

using namespace std;

#ifndef MYCLASS_H
#define MYCLASS_H
class Apartment
{
public:
    Apartment(int, int);
    int heatingCost(void);
private:
    int numOfTenants;
    int area;
protected:
};
#endif

Apartment::Apartment(int t, int a)
{
    numOfTenants = t;
    area = a;
}

int Apartment::heatingCost()
{
    return numOfTenants * area;
}

int main()
{
    myClass object;
    string text = object.publicTextToPrint;
    cout << "After initialization public string = "<< text << endl;
    text = "THIS";
    object.publicFunction(text);
    cout << "And now after using publicFunction text is = "<< object.publicTextToPrint << endl;
    return 0;
}
