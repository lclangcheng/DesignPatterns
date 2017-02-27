#include "proxy.h"

Proxy::Proxy(SchoolGirl* mm)
{
    this->pursuit = new Pursuit(mm);
}

void Proxy::GiveDolls()
{
    this->pursuit->GiveDolls();
}

void Proxy::GiveFlowers()
{
    this->pursuit->GiveFlowers();
}

void Proxy::GiveChocolate()
{
    this->pursuit->GiveChocolate();
}
