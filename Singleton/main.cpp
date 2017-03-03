#include <iostream>
#include "singleton.h"

using namespace std;

int main(int argc, char *argv[])
{
    Singleton* singleton1 = Singleton::GetInstance();
    Singleton* singleton2 = Singleton::GetInstance();

    std::cout << singleton1 << std::endl;
    std::cout << singleton2 << std::endl;

    return 0;
}
