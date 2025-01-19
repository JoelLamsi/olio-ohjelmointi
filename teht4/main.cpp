#include <iostream>
#include "Pankki.h"
using namespace std;

int main()
{
    Pankki pankki = Pankki();
    cout << "=> Pankin varat: " << pankki.getVarat() << endl;

    pankki.tiliTalletus("Alice", 1200);
    pankki.tiliTalletus("Bob", 200);
    pankki.tiliTalletus("Charlie", 200);
    pankki.tiliTalletus("David", 200);

    cout << "=> Pankin varat: " << pankki.getVarat() << endl;

    pankki.tiliNosto("Charlie", 250);

    pankki.luotonNosto("Alice", 1000);
    cout << "=> Pankin varat: " << pankki.getVarat() << endl;

    pankki.luotonNosto("Alice", 1500);
    cout << "=> Pankin varat: " << pankki.getVarat() << endl;

    pankki.luotonNosto("Bob", 1333);
    cout << "=> Pankin varat: " << pankki.getVarat() << endl;

    pankki.tiliTalletus("Charlie", 2513);
    cout << "=> Pankin varat: " << pankki.getVarat() << endl;
    return 0;
}
