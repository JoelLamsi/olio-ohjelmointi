#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "Seuraaja.h"
class Notifikaattori
{
public:
    Notifikaattori();
    ~Notifikaattori();
    void lisaa(Seuraaja*);
    void poista(Seuraaja*);
    void tulosta();
    void postita(string);
private:
    Seuraaja* seuraajat;
};

#endif // NOTIFIKAATTORI_H
