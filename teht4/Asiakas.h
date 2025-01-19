#include <iostream>
#include "Pankkitili.h"
#include "Luottotili.h"
#ifndef ASIAKAS_H
#define ASIAKAS_H
class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    double getTilisaldo();
    double getLuottosaldo();
    void tiliTalletus(double);
    double tiliNosto(double);
    void luotonMaksu(double);
    double luotonNosto(double);
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
