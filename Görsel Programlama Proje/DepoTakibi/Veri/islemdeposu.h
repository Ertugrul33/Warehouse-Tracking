#ifndef ISLEMDEPOSU_H
#define ISLEMDEPOSU_H

#include <vector>
#include <Veri/depogirisverisi.h>
#include <Veri/depocikisverisi.h>

using namespace std;

class islemdeposu
{
public:
    islemdeposu();

    void gir(depogirisverisi &veri);
    void cik(depocikisverisi &veri);

    int depoyaGirilenMiktar(string urun);
    int depodanCikanMiktar(string urun);
    int depodaKalanMiktar(string urun);

    void gunlukDurum();
    void genelDurum();

private:
    vector<depogirisverisi> depogirisverileri;
    vector<depocikisverisi> depocikisverileri;
};

#endif // ISLEMDEPOSU_H
