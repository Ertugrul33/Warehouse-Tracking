#ifndef DEPOCIKISISLEMI_H
#define DEPOCIKISISLEMI_H

#include "Veri/islemdeposu.h"

class depocikisislemi
{
public:
    depocikisislemi(islemdeposu &d);

    void cik();
private:
    islemdeposu &depo;
};

#endif // DEPOCIKISISLEMI_H
