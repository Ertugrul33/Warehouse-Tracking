#include "islemdeposu.h"
#include <iostream>

using namespace std;

islemdeposu::islemdeposu()
{

}

void islemdeposu::gir(depogirisverisi &veri)
{
    depogirisverileri.push_back(veri);
}

void islemdeposu::cik(depocikisverisi &veri)
{
    depocikisverileri.push_back(veri);
}

int islemdeposu::depoyaGirilenMiktar(string urun)
{
    int sonuc=0;
    for(auto veri:depogirisverileri)
    {
        if(veri.getUrunadi() == urun)
        {
            sonuc += veri.getMiktar();
        }
    }
    return sonuc;
}

int islemdeposu::depodanCikanMiktar(string urun)
{
    int sonuc=0;
    for(auto veri:depocikisverileri)
    {
        if(veri.getUrunadi() == urun)
        {
            sonuc += veri.getMiktar();
        }
    }
    return sonuc;
}

int islemdeposu::depodaKalanMiktar(string urun)
{
    return depoyaGirilenMiktar(urun)-depodanCikanMiktar(urun);
}

void islemdeposu::gunlukDurum()
{
    string tarih;
    int gmiktar=0;
    int cmiktar=0;
    string urunadi;
    double topcik=0;
    double topgir=0;

    cout << "Urun adini giriniz: ";
    cin >> urunadi;
    cout << "Tarih giriniz: ";
    cin >> tarih;
    cout << "\n";

    for(auto i:depogirisverileri)
    {
        if(i.getTarih()==tarih)
        {
            gmiktar = i.getMiktar();
            topgir += gmiktar;
        }
    }
    cout << "Girdiginiz Tarihte En Son " << gmiktar << " Miktar Urun Girildi" << endl;
    cout << "Girdiginiz Tarihte Toplam Girilen Urun Miktari: " << topgir << endl;

    for(auto i:depocikisverileri)
    {
        if(i.getTarih()==tarih)
        {
            cmiktar = i.getMiktar();
            topcik += cmiktar;
        }
    }
    cout << "Girdiginiz Tarihte En Son " << cmiktar << " Miktar Urun Cikarildi" << endl;
    cout << "Girdiginiz Tarihte Toplam Cikarilan Urun Miktari: " << topcik << endl;
    cout << "Girdiginiz Tarihteki Urun Miktari: "<< topgir-topcik << endl;
    cout << "\n";
}


void islemdeposu::genelDurum()
{
    int gmiktar=0;
    int cmiktar=0;
    string urunadi;
    double topcik=0;
    double topgir=0;

    cout << "Urun adini giriniz: ";
    cin >> urunadi;
    cout << "\n";

    for(auto i:depogirisverileri)
    {
        gmiktar = i.getMiktar();
        topgir += gmiktar;
    }
    cout << "Depoya En Son Girilen Miktar: " << gmiktar << endl;
    cout << "Toplam Girilen Miktar: " << topgir << endl;

    for(auto i:depocikisverileri)
    {
        cmiktar = i.getMiktar();
        topcik += cmiktar;
    }
    cout << "Depodan En Son Cikarilan Miktar: " << cmiktar << endl;
    cout << "Toplam Cikarilan Miktar: "<<topcik << endl;
    cout << "Su Anki Urun Miktari: "<<topgir-topcik << endl;
    cout << "\n";
}
