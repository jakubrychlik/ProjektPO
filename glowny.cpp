#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "glowny.h"
#include "administrator.h"
#include "uzytkownik.h"
#include <fstream>

using namespace std;

Glowny::Glowny()
{
}
Glowny::~Glowny()
{
}

void Glowny::obsluga()
{
    for(;;)
{
    string hasloA;
    int wybor;

    cout << " " << endl;
    cout << "1. Zaloguj jako administrator." << endl;
    cout << " " << endl;
    cout << "2. Zaloguj jako uzytkownik." << endl;
    cout << " " << endl;
    cout << "3. OFF " << endl;
    cout << " " << endl;
    cout << "Wybierz: " << endl;
    cin >> wybor;
    cout << " " << endl;

    switch(wybor)
    {
    case 1:
        {
            Administrator a1;
            a1.logowanieA();

        }
        break;

    case 2:
        {
            Uzytkownik u1;
            u1.logowanieU();
        }
        break;

    case 3:
        {
            exit(0);
        }
        break;

    default: cout << "Bledne dane." <<endl;
    }
    getchar(); getchar();
    system("cls");
}
}
