#ifndef PURSUIT_H
#define PURSUIT_H
#include "interfacegivegift.h"
#include "schoolGirl.h"

class Pursuit : public InterfaceGiveGift
{
public:
    Pursuit(SchoolGirl* mm);
    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();
private:
    SchoolGirl* mm;
};

#endif // PURSUIT_H
