#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class Administrator
{
    private:
        string login, haslo, czujnik, hasloA;
        int nr_uzytkownika;

    public:
        Administrator();
        ~Administrator();

        void dodajuzytkownika();
        void dodajczujnik();
        void logowanieA(); //logowanie administratora
};
