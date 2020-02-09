#include "seznam.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Seznam s;
    string line;
    ifstream myfile ("text.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            s.pridej_na_zacatek(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file"<<endl;

    cout << "Pocet slov v seznamu: "<< s.getPocet() << endl;
    cout << "Prumerna delka slova v seznamu: "<< s.getPrumer() << "\n" << endl;
    cout << s << endl;

    return 0;
}

