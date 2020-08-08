#ifndef DEPOGIRISISLEMI_H
#define DEPOGIRISISLEMI_H

#include "Veri/islemdeposu.h"

class depogirisislemi
{
public:
    depogirisislemi(islemdeposu &d);

    void gir();
private:
    islemdeposu &depo;
};

#endif // DEPOGIRISISLEMI_H
