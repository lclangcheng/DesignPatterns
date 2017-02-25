#include <iostream>
#include "classes.h"
using namespace std;

int main(int argc, char *argv[])
{
    //SimpleFactory Demo
    SimpleFactory* factory = new SimpleFactory();
    SingleCore *coreA = factory->CreateSingleCore(CTYPE::COREA);
    coreA->Show();
    SingleCore *coreB = factory->CreateSingleCore(CTYPE::COREB);
    coreB->Show();
    return 0;
}
