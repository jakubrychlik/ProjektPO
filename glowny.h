#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class Glowny
{
    private:
        string hasloA;
        int wybor;

    public:
        Glowny();
        virtual ~Glowny();

        void obsluga();
};
