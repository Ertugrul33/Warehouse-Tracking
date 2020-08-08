#include "menu.h"

#include "depogirisislemi.h"
#include "depocikisislemi.h"

#include <iostream>

using namespace std;

Menu::Menu()
{

}

void Menu::calistir()
{
    while(true)
    {
        int secim;
        cout << "BIR ISLEM SECIN" << endl
             << "[1] DEPO GIRIS" << endl
             << "[2] DEPO CIKIS" << endl
             << "[3] GUNLUK DURUM" << endl
             << "[4] GENEL DURUM" << endl
             << "[5] CIKIS" << endl
             << "SECIMINIZ: ";
        cin >> secim;
        if(secim==1)
        {
            depogirisislemi islem(depo);
            islem.gir();
        }
        else if(secim==2)
        {
            depocikisislemi islem(depo);
            islem.cik();
        }
        else if(secim==3)
        {
            islemdeposu islem(depo);
            islem.gunlukDurum();

        }
        else if(secim==4)
        {
            islemdeposu islem(depo);
            islem.genelDurum();
        }
        else
        {
            break;
        }
    }
}
