#include <iostream>
#include "Bridge.h"
using namespace std;

int main(int argc, char *argv[])
{
    Abstraction* abs = new RefinedAbstraction();
    abs->setImplementor(new ConcreteImplementorA());
    abs->Operation();

    abs->setImplementor(new ConcreteImplementorB());
    abs->Operation();
    return 0;
}
