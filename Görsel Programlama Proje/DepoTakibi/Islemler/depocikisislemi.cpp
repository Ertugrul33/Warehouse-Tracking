#include "depocikisislemi.h"

#include <iostream>
#include <string>

#include "Veri/depocikisverisi.h"

using namespace std;

depocikisislemi::depocikisislemi(islemdeposu &d) : depo(d)
{

}

void depocikisislemi::cik()
{
    string urunadi;
    int miktar;
    string tarih;

    cout << "Urun Adi        : ";
    cin >> urunadi;

    int kalan = depo.depodaKalanMiktar(urunadi);
    cout << "Depoda Kalan Miktar: " << kalan << endl;

    cout << "Cikarilacak Miktar: ";
    cin >> miktar;
    while(miktar>kalan)
    {
        cerr << "Istediginiz Kadar Depoda Urun Yok." << endl;
        cout << "Cikarilacak Miktar: ";
        cin >> miktar;
        if(miktar<0)
        {
            return;
        }
    }
    cout << "Tarih           : ";
    cin >> tarih;

    depocikisverisi dcv(urunadi, miktar, tarih);
    depo.cik(dcv);
}
