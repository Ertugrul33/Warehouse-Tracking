#include "depogirisverisi.h"

depogirisverisi::depogirisverisi(string adi, int mik, string date)
{
    tarih = date;
    miktar = mik;
    urunadi = adi;
}

string depogirisverisi::getUrunadi() const
{
    return urunadi;
}

void depogirisverisi::setUrunadi(const string &value)
{
    urunadi = value;
}

int depogirisverisi::getMiktar() const
{
    return miktar;
}

void depogirisverisi::setMiktar(int value)
{
    miktar = value;
}

string depogirisverisi::getTarih() const
{
    return tarih;
}

void depogirisverisi::setTarih(const string &value)
{
    tarih = value;
}
