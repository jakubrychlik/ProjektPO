#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "uzytkownik.h"
#include "glowny.h"
#include <fstream>

using namespace std;

Uzytkownik::Uzytkownik()
{
}
Uzytkownik::~Uzytkownik()
{
}

void Uzytkownik::dodajgosci()
{
    cout <<" "<<endl;
    cout << "Podaj imie goscia: " << endl;
    cin >> imieG;
    cout << "Podaj nazwisko goscia: " << endl;
    cin >> nazwiskoG;

    fstream plik;
    plik.open("goscie.txt", ios::out | ios::app);
    plik<<imieG<<endl;
    plik<<nazwiskoG<<endl;
    plik.close();

}

void Uzytkownik::dodajmieszkanca()
{
    cout <<" "<<endl;
    cout << "Podaj imie mieszkanca: " << endl;
    cin >> imieM;
    cout << "Podaj nazwisko mieszkanca: " << endl;
    cin >> nazwiskoM;
    cout << "Podaj wage mieszkanca: " << endl;
    cin >> waga;
    cout << "Podaj wzrost mieszkanca: " << endl;
    cin >> wzrost;

    fstream plik2;
    plik2.open("mieszkaniec.txt", ios::out | ios::app);
    plik2<<imieM<<endl;
    plik2<<nazwiskoM<<endl;
    plik2<<waga<<endl;
    plik2<<wzrost<<endl;
    plik2.close();

}

void Uzytkownik::wyboropcji()
{
    int wyborO;

        system("cls");

        cout <<" "<<endl;
        cout <<"Wybierz opcje: "<<endl;
        cout <<" "<<endl;
        cout <<"1. Otworz okno"<<endl;
        cout <<" "<<endl;
        cout <<"2. Otworz garaz. "<<endl;
        cout <<" "<<endl;
        cout <<"3. Otworz drzwi. "<<endl;
        cout <<" "<<endl;
        cout <<"4. Cofnij. "<<endl;
        cin>>wyborO;


}

void Uzytkownik::sprawdzaktywnosc()
{

}

void Uzytkownik::logowanieU()
{
    system("cls");

    int wyborU;
    cout<< "Podaj haslo: " <<endl;
    cin >>hasloU;
    if(hasloU=="user")                              // HAS£O: user
        {
            system("cls");

            cout <<" "<<endl;
            cout <<"Wybierz opcje: "<<endl;
            cout <<" "<<endl;
            cout <<"1. Dodaj gosci."<<endl;
            cout <<" "<<endl;
            cout <<"2. Dodaj mieszkanca. "<<endl;
            cout <<" "<<endl;
            cout <<"3. Sprawdz aktywnosc. "<<endl;
            cout <<" "<<endl;
            cout <<"4. Cofnij. "<<endl;
            cin>>wyborU;
            switch(wyborU)
            {
            case 1:
                {
                 system("cls");
                 Uzytkownik u1;
                 u1.dodajgosci();
                }
                break;
            case 2:
                {
                    system("cls");
                    Uzytkownik u2;
                    u2.dodajmieszkanca();
                }
                break;

            case 3:
                    {

                    }
            break;

            case 4:
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
