#include "Seuraaja.h"
#include <iostream>
Seuraaja::Seuraaja(string nimi) : nimi(nimi), next(nullptr)
{
    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << "Seuraaja " << nimi << " sai viestin: " << viesti << endl;
}
