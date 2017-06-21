#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class Aktywnosc
{
    private:
        string otworz, zamknij;

    public:
        Aktywnosc();
        virtual ~Aktywnosc();

        void OZgaraz(); //otworz zamknij garaz
        void OZokno();  //otworz zamknij okno
        void OZdrzwi(); //otworz zamknij drzwi
};
