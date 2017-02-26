#include "person.h"
#include <iostream>

Person::Person()
{

}

Person::Person(std::string name)
{
    this->name = name;
}

void Person::Show()
{
    std::cout << "装扮的" + this->name << std::endl;
}

void Finery::Decorate(Person *component)
{
    this->component = component;
}

void Finery::Show()
{
    if (this->component != nullptr) {
        this->component->Show();
    }
}

void TShirts::Show()
{
    std::cout << "TShirts " << std::endl;
    Finery::Show();
}

void Overcoat::Show()
{
    std::cout << "Overcoat " << std::endl;
    Finery::Show();
}

void Jeans::Show()
{
    std::cout << "Jeans " << std::endl;
    Finery::Show();
}

void Sneaker::Show()
{
    std::cout << "Sneaker" << std::endl;
    Finery::Show();
}
