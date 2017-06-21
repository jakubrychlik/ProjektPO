#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "glowny.h"
#include <fstream>

using namespace std;

Administrator::Administrator()
{
}

Administrator::~Administrator()
{
}

void Administrator::dodajuzytkownika()
{
    cout << "Podaj login: " << endl;
    cin >> login;
    cout << "Podaj haslo: " << endl;
    cin >> haslo;

    fstream plik;
    plik.open("uzytkownicy.txt", ios::out | ios::app);
    plik<<login<<endl;
    plik<<haslo<<endl;
    plik.close();

}

void Administrator::dodajczujnik()
{
    cout << "Podaj czujnik: " << endl;
    cin >> czujnik;

    fstream plik2;
    plik2.open("czujnik.txt", ios::out | ios::app);
    plik2<<czujnik<<endl;
    plik2.close();

}

void Administrator::logowanieA()
{
    system("cls");

    int wyborA;
    cout<< "Podaj haslo: " <<endl;
    cin >>hasloA;
    if(hasloA=="admin")                              // HAS£O: admin
        {
            cout <<" "<<endl;
            cout <<"Wybierz opcje: "<<endl;
            cout <<" "<<endl;
            cout <<"1. Dodaj uzytkownika."<<endl;
            cout <<" "<<endl;
            cout <<"2. Dodaj czujnik. "<<endl;
            cout <<" "<<endl;
            cout <<"3. Cofnij. "<<endl;
            cin>>wyborA;

            switch(wyborA)
            {
                case 1:
                    {
                        system("cls");
                        Administrator a2;
                        a2.dodajuzytkownika();
                    }
                break;

                case 2:
                    {
                        system("cls");
                        Administrator a3;
                        a3.dodajczujnik();
                    }
                break;
                case 3:
                    {
                        system("cls");
                        Glowny g2;
                        g2.obsluga();
                    }
                break;

                default: cout << "Bledne dane. " << endl;
            }

        }
    else {cout << "Zle haslo." << endl;}
}
