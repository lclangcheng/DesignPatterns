#include "pursuit.h"
#include <iostream>

Pursuit::Pursuit(SchoolGirl* mm)
{
    this->mm = mm;
}

void Pursuit::GiveDolls()
{
    std::cout << this->mm->getName() + " giveDolls." << std::endl;
}

void Pursuit::GiveFlowers()
{
    std::cout << this->mm->getName() + " giveFlowers." << std::endl;
}

void Pursuit::GiveChocolate()
{
    std::cout << this->mm->getName() + " giveChocolate." << std::endl;
}
