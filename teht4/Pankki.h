#include <iostream>
#include <string>
#include "Asiakas.h"
#ifndef PANKKI_H
#define PANKKI_H
class Pankki
{
public:
    Pankki();
    double getVarat();
    void tiliTalletus(string, double);
    double tiliNosto(string, double);
    void luotonMaksu(string, double);
    double luotonNosto(string, double);
private:
    Asiakas a, b, c;
    Asiakas* getAsiakas(string nimi)
    {
        if (nimi == "Alice") return &a;
        else if (nimi == "Bob") return &b;
        else if (nimi == "Charlie") return &c;

        cout << nimi << " ei ole pankin asiakas" << endl;
        return nullptr;
    }
};

#endif // PANKKI_H
