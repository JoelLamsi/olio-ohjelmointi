#include "Pankkitili.h"
#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    void deposit(double) override;
    double withdraw(double) override;
protected:
    double luottoraja;
};

#endif // LUOTTOTILI_H
