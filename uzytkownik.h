#include <iostream>
#include <stdio.h>
#include <cstdlib>


using namespace std;

class Uzytkownik
{
    private:
        string imieG, nazwiskoG, imieM, nazwiskoM, hasloU;
        float waga, wzrost;

    public:
        Uzytkownik();
        ~Uzytkownik();

        void dodajgosci();
        void dodajmieszkanca();
        void wyboropcji();
        void sprawdzaktywnosc();
        void logowanieU();

};
