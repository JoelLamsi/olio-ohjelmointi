#include <iostream>
using namespace std;
#ifndef PANKKITILI_H
#define PANKKITILI_H
class Pankkitili
{
public:
    Pankkitili(string);
    double getBalance();
    virtual void deposit(double);
    virtual double withdraw(double);
protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
