#include "depocikisverisi.h"

depocikisverisi::depocikisverisi(string adi, int mik, string date)
{
    tarih = date;
    miktar = mik;
    urunadi = adi;
}

string depocikisverisi::getUrunadi() const
{
    return urunadi;
}

void depocikisverisi::setUrunadi(const string &value)
{
    urunadi = value;
}

int depocikisverisi::getMiktar() const
{
    return miktar;
}

void depocikisverisi::setMiktar(int value)
{
    miktar = value;
}

string depocikisverisi::getTarih() const
{
    return tarih;
}

void depocikisverisi::setTarih(const string &value)
{
    tarih = value;
}
