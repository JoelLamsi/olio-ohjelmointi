#include "Luottotili.h"
#include "Pankkitili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili(string omistaja, double luottoraja) : Pankkitili(omistaja)
{
    this->luottoraja = luottoraja;
    cout << "Luottotili luotu " << omistaja << ":lle, luottoraja " << this->luottoraja << endl;
}

void Luottotili::deposit(double amount)
{
    if (amount < 0)
    {
        cout << "VIRHE: Luottoa ei voi tallettaa alle nollan" << endl;
        return;
    }

    if (this->saldo - amount >= this->luottoraja) {
        this->saldo -= amount;
    } else {
        cout << "VIRHE: Yli luottorajan ei voi tallettaa" << endl;
    }
}

double Luottotili::withdraw(double amount)
{
    if (amount <= 0)
    {
        cout << "VIRHE: Luoton nosto ei voi olla alle tai yhta kuin nolla" << endl;
        return -1;
    }

    if (this->saldo - amount < -this->luottoraja)
    {
        cout << "VIRHE: Luoton nosto epaonnistui. Luottoraja ylittyy" << endl;
        return -1;
    }

    this->saldo -= amount;
    return amount;
}
