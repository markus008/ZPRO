#include "seznam.h"


using namespace std;


Seznam::Seznam()
{
    hlavicka = zarazka = new Prvek;
    pocet = 0;
}

Seznam::~Seznam()
{
    vyprazdni();
    delete hlavicka;
}

void Seznam::vyprazdni()
{
    while(!je_prazdny())
        odeber_prvni();
}

void Seznam::pridej_na_zacatek(string data)
{
    hlavicka = new Prvek(data, hlavicka);
    pocet++;
}

bool Seznam::je_prazdny()
{
    return hlavicka == zarazka;
}

int Seznam::getPocet()
{
    return pocet;
}

int Seznam::getPrumer()
{
    Prvek * pom = hlavicka;
    int delka =0;
    while(pom != zarazka)
    {
        delka += pom->getData().length();

        pom = pom->getDalsi();
    }
    return delka/pocet;
}

void Seznam::odeber_prvni()
{
    if(je_prazdny())
        return;

    Prvek * pom = hlavicka;
    hlavicka = hlavicka->getDalsi();
    delete pom;
}

ostream & operator<<(ostream & os, const Seznam & s)
{
    os << "vypisuji seznam: "<<endl;
    Prvek * pom = s.hlavicka;
    while(pom != s.zarazka)
    {
        Prvek * pom2 = s.hlavicka;
        int pocet = 0;
        while(pom2 != s.zarazka)
        {
            if(pom->getDataInLower() == pom2->getDataInLower())
                pocet++;

            pom2 = pom2->getDalsi();
        }
        os << pom->getData() <<" (samohlasky: "<< pom->getSamohlasky() <<", souhlasky: "<< pom->getSouhlasky()  << ", cetnost: " << pocet  << ")" << endl;
        pom = pom->getDalsi();
    }
    return os;
}

