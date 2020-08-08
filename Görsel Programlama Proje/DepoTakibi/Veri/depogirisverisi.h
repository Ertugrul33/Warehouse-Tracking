#ifndef DEPOGIRISVERISI_H
#define DEPOGIRISVERISI_H

#include <string>

using namespace std;

class depogirisverisi
{
public:
    depogirisverisi(string adi="", int mik=0, string date="01.01.1980");

    string getUrunadi() const;
    void setUrunadi(const string &value);

    int getMiktar() const;
    void setMiktar(int value);

    string getTarih() const;
    void setTarih(const string &value);

private:
    string urunadi;
    int miktar;
    string tarih;
};

#endif // DEPOGIRISVERISI_H
