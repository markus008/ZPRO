#include <iostream>


using namespace std;

class Prvek
{
private:
    string data;
    Prvek * dalsi;

public:
    Prvek();//konstruktor bez parametru
    ~Prvek();//destruktor
    Prvek(string _data, Prvek * _dalsi);//konstruktor s parametry

    void setData(string _data);
    void setDalsi(Prvek * _dalsi);
    void vypis();

    string getData();
    int getSouhlasky();
    int getSamohlasky();
    Prvek * getDalsi();
    string getDataInLower();


};
