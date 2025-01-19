#include "Luottotili.h"
#include "Pankkitili.h"
using namespace std;

Luottotili::Luottotili(string omistaja, double luottoraja) : Pankkitili(omistaja)
{
    this->luottoraja = luottoraja;
    this->omistaja = omistaja;
    cout << "Luottotili luotu " << this->omistaja << ":lle, luottoraja " << this->luottoraja << endl;
}

void Luottotili::deposit(double amount)
{
    if (amount > 0)
    {
        if (this->saldo + amount <= 0) {
            this->saldo += amount;
        } else {
            cout << "VIRHE: Luottoa ei voi maksaa yli nollan" << endl;
        }
    }
}

double Luottotili::withdraw(double amount)
{
    if (amount > 0 && amount <= this->luottoraja)
    {
        this->luottoraja -= amount;
        this->saldo += amount;
        cout << this->omistaja << " Luoton nosto " << amount << endl;
        return amount;
    } else
    {
        cout << this->omistaja << " Luoton nosto " << amount << " ei sallittu" << endl;
        return -1;
    }
}
