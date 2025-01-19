#include "Asiakas.h"
#include "Luottotili.h"
#include "Pankkitili.h"

Asiakas::Asiakas(string nimi, double luottoraja) : kayttotili(nimi), luottotili(nimi, luottoraja)
{
    this->nimi = nimi;
    cout << "Asiakkuus " << this->nimi << ":lle luotu" << endl;
}

string Asiakas::getNimi()
{
    return this->nimi;
}

double Asiakas::getTilisaldo()
{
    return this->kayttotili.getBalance();
}

double Asiakas::getLuottosaldo()
{
    return this->luottotili.getBalance();
}

void Asiakas::tiliTalletus(double amount)
{
    if (amount > 0)
    {
        this->kayttotili.deposit(amount);
        cout << this->nimi << " Talletus " << amount << " => saldo " <<  this->kayttotili.getBalance() << endl;
    } else
    {
        cout << "Talletus ei onnistunut " << this->nimi << ":n tilille" << endl;
    }
}

double Asiakas::tiliNosto(double amount)
{
    if (amount <= this->getTilisaldo() && amount > 0)
    {
        return this->kayttotili.withdraw(amount);
    } else
    {
        cout << this->nimi << " Nostoa " << amount << " ei sallita" << endl;
        return -1;
    }
}

void Asiakas::luotonMaksu(double amount)
{
    this->luottotili.deposit(amount);
}

double Asiakas::luotonNosto(double amount)
{
    return this->luottotili.withdraw(amount);
}
