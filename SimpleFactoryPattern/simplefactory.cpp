#include "simplefactory.h"
#include <iostream>

SingleCore* SimpleFactory::CreateSingleCore(enum CTYPE ctype)
{
    if(ctype == CTYPE::COREA) {
        return new SingleCoreA();
    } else if (ctype == CTYPE::COREB) {
        return new SingleCoreB();
    } else {
      return nullptr;
    }
}

void SingleCoreA::Show()
{
    std::cout << "SingleCoreA" << std::endl;
}

void SingleCoreB::Show()
{
    std::cout << "SingleCoreB" << std::endl;
}
