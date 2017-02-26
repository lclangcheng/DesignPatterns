#include <iostream>
#include "person.h"

using namespace std;

int main(int argc, char *argv[])
{
    Person *person = new Person("Lc");

    TShirts* tShirts = new TShirts();
    Overcoat* overcoat = new Overcoat();
    Jeans* jeans = new Jeans();
    Sneaker* sneaker = new Sneaker();
    tShirts->Decorate(person);
    overcoat->Decorate(tShirts);
    jeans->Decorate(overcoat);
    sneaker->Decorate(jeans);
    sneaker->Show();

    return 0;
}
