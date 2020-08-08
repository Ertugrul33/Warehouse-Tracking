#include "depogirisislemi.h"

#include <string>
#include <iostream>

#include "Veri/depogirisverisi.h"

using namespace std;

depogirisislemi::depogirisislemi(islemdeposu &d) : depo(d)
{

}

void depogirisislemi::gir()
{
    string urunadi;
    int miktar;
    string tarih;

    cout << "Urun Adi        : ";
    cin >> urunadi;
    cout << "Girilecek Miktar: ";
    cin >> miktar;
    cout << "Tarih           : ";
    cin >> tarih;

    depogirisverisi dgv(urunadi, miktar, tarih);
    depo.gir(dgv);

}
