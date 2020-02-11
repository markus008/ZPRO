#include "Prvek.h"
#include <bits/stdc++.h>

using namespace std;

Prvek::Prvek()
{//konstruktor bez parametru
    setData("");
    setDalsi(nullptr);
}

Prvek::Prvek(string _data, Prvek * _dalsi)
{
    setData(_data);
    setDalsi(_dalsi);
}


void Prvek::setData(string _data)
{//misto pro pripadnou manipulaci, konverzi s daty
    data = _data;
}

void Prvek::setDalsi(Prvek * dalsi)
{
    this->dalsi = dalsi;
}

void Prvek::vypis()
{
    cout << getData() << endl;
}

string Prvek::getData()
{
    return data;
}

string Prvek::getDataInLower()
{
    string lover = data;
    std::for_each(lover.begin(), lover.end(), [](char & c) {
        c = ::tolower(c);
    });
    return lover;
}
int Prvek::getSouhlasky()
{
    string souhlasky = "qwrtpsdfghjklzxcvbnmQWRTPSDFGHJKLZXCVBNM";
    int length = data.length() ;
    char char_array[length + 1];
    strcpy(char_array, data.c_str());
    int number = 0;//pocet souhlasek
    for (int i = 0; i < length; i++){
        if(souhlasky.find(char_array[i])!= string::npos){
            number++;
        }
    }
    return number;
}
int Prvek::getSamohlasky()
{
    int length = data.length() ;
    char char_array[length + 1];
    strcpy(char_array, data.c_str());
    int number = 0;//pocet samohlasek
    for (int i = 0; i < length; i++){
        if(char_array[i]=='a'||char_array[i]=='A'){
            number++;
        }
        if(char_array[i]=='e'||char_array[i]=='E'){
            number++;
        }
        if(char_array[i]=='i'||char_array[i]=='I'){
            number++;
        }
        if(char_array[i]=='o'||char_array[i]=='O'){
            number++;
        }
        if(char_array[i]=='u'||char_array[i]=='U'){
            number++;
        }
    }
    return number;
}
Prvek * Prvek::getDalsi()
{
    return dalsi;
}

Prvek::~Prvek()
{
}
