#include "Notifikaattori.h"
#include <iostream>
Notifikaattori::Notifikaattori() : seuraajat(nullptr)
{
    cout << "Luodaan notifikaattori" << endl;
}

Notifikaattori::~Notifikaattori()
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr)
    {
        Seuraaja* seuraava = nykyinen->next;
        delete nykyinen;
        nykyinen = seuraava;
    }
}

void Notifikaattori::lisaa(Seuraaja* uusi)
{
    uusi->next = seuraajat;
    seuraajat = uusi;
    cout << "Notifikaattori lisaa seuraajan " << seuraajat->getNimi() << endl;

}

void Notifikaattori::poista(Seuraaja* poistettava)
{
    Seuraaja* nykyinen = seuraajat;
    Seuraaja* edellinen = nullptr;

    while (nykyinen != nullptr)
    {
        if (nykyinen == poistettava)
        {
            if (edellinen == nullptr)
            {
                seuraajat = nykyinen->next;
            } else {
                edellinen->next = nykyinen->next;
            }
            cout << "Notifikaattori poistaa seuraajan " << nykyinen->getNimi() << endl;
            delete nykyinen;
            return;
        }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja* nykyinen = seuraajat;
    cout << "Notifikaattorin seuraajat:" << endl;
    while (nykyinen != nullptr)
    {
        cout << "Seuraaja " << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postittaa viestin: " << viesti << endl;
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr)
    {
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
