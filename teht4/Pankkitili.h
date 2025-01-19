#include <iostream>
using namespace std;
#ifndef PANKKITILI_H
#define PANKKITILI_H
class Pankkitili
{
public:
    Pankkitili(string);
    double getBalance();
    void deposit(double);
    double withdraw(double);
protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
