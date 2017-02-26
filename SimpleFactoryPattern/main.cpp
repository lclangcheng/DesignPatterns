#include <iostream>
#include "classes.h"
using namespace std;

int main(int argc, char *argv[])
{
    //SimpleFactory Demo
//    SimpleFactory* factory = new SimpleFactory();
//    SingleCore *coreA = factory->CreateSingleCore(CTYPE::COREA);
//    coreA->Show();
//    SingleCore *coreB = factory->CreateSingleCore(CTYPE::COREB);
//    coreB->Show();
    CashContext* cashContext = new CashContext(CHARGE::NORMAL);
    std::cout << cashContext->getResult(300) << std::endl;

    cashContext = new CashContext(CHARGE::REBATE);
    std::cout << cashContext->getResult(300) << std::endl;

    cashContext = new CashContext(CHARGE::RETURN);
    std::cout << cashContext->getResult(300) << std::endl;
    return 0;
}
