#include <iostream>
using namespace std;
#ifndef CHEF_H
#define CHEF_H
class Chef
{
public:
    Chef(string);
    ~Chef();
    string getName(void);
    int makeSalad(int);
    int makeSoup(int);
protected:
    string chefName;
};

#endif // CHEF_H
