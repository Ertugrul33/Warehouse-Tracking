#ifndef DEPOCIKISVERISI_H
#define DEPOCIKISVERISI_H

#include <string>

using namespace std;

class depocikisverisi
{
public:
    depocikisverisi(string adi="", int mik=0, string date="01.01.1980");

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

#endif // DEPOCIKISVERISI_H
