#ifndef PROXY_H
#define PROXY_H
#include "interfacegivegift.h"
#include "pursuit.h"
#include "schoolGirl.h"

class Proxy : public InterfaceGiveGift
{
public:
    Proxy(SchoolGirl* mm);
    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();

private:
    Pursuit* pursuit;
};

#endif // PROXY_H
