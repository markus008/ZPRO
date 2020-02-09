#include "Prvek.h"



using namespace std;

class Seznam{
    Prvek * hlavicka, * zarazka;
    int pocet;
    int cetnost(Prvek * _prvek );


public:
    Seznam();
    ~Seznam();

    void vyprazdni();
    void pridej_na_zacatek(string data);
    bool je_prazdny();
    void odeber_prvni();
    int getPocet();
    int getPrumer();
    friend ostream & operator<<(ostream & os, const Seznam &);



};

