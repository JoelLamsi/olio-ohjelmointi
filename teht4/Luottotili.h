#include "Pankkitili.h"
#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    void deposit(double);
    double withdraw(double);
protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
