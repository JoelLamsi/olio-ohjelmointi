#include "Pankkitili.h"

Pankkitili::Pankkitili(string omistaja)
{
    this->omistaja = omistaja;
    cout << "Pankkitili luotu " << this->omistaja << ":lle" << endl;
}

double Pankkitili::getBalance()
{
    return this->saldo;
}

void Pankkitili::deposit(double amount)
{
    this->saldo += amount;
}

double Pankkitili::withdraw(double amount)
{
    if (amount > this->saldo && amount <= 0)
    {
        cout << "VIRHE: Nosto tililta ei onnistunut" << endl;
        return -1;
    } else {
        this->saldo -= amount;
        return this->saldo;
    }
}
