#include <iostream>
#include "strategy.h"

using namespace std;

int main(int argc, char *argv[])
{
    CashContext* cashContext = new CashContext(CHARGE::NORMAL);
    std::cout << cashContext->getResult(300) << std::endl;

    cashContext = new CashContext(CHARGE::REBATE);
    std::cout << cashContext->getResult(300) << std::endl;

    cashContext = new CashContext(CHARGE::RETURN);
    std::cout << cashContext->getResult(300) << std::endl;
    return 0;
}
