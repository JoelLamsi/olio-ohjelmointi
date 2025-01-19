#include "Pankki.h"

Pankki::Pankki() : a("Alice", 2000), b("Bob", 2000), c("Charlie", 2000)
{
    cout << "Pankki konstruktori" << endl;
}

double Pankki::getVarat()
{
    return a.getTilisaldo() + b.getTilisaldo() + c.getTilisaldo() - (a.getLuottosaldo() + b.getLuottosaldo() + c.getLuottosaldo());
}

void Pankki::tiliTalletus(string nimi, double amount)
{
    Asiakas* asiakas = getAsiakas(nimi);
    if (asiakas) {
        asiakas->tiliTalletus(amount);
    } else {
        cout << "Talletusta ei voitu suorittaa. Tarkista syottamasi asiakastiedot." << endl;
    }
}

double Pankki::tiliNosto(string nimi, double amount)
{
    Asiakas* asiakas = getAsiakas(nimi);
    if (asiakas) {
        return asiakas->tiliNosto(amount);
    } else {
        cout << "Nostoa ei voitu suorittaa. Tarkista syottamasi asiakastiedot." << endl;
        return -1;
    }
}

void Pankki::luotonMaksu(string nimi, double amount)
{
    Asiakas* asiakas = getAsiakas(nimi);
    if (asiakas) {
        asiakas->luotonMaksu(amount);
    } else {
        cout << "Luoton maksua ei voitu suorittaa. Tarkista syottamasi asiakastiedot." << endl;
    }
}

double Pankki::luotonNosto(string nimi, double amount)
{
    Asiakas* asiakas = getAsiakas(nimi);
    if (asiakas) {
        return asiakas->luotonNosto(amount);
    } else {
        cout << "Luoton nostoa ei voitu suorittaa. Tarkista syottamasi asiakastiedot." << endl;
        return -1;
    }
}
