#include <iostream>
#include "schoolGirl.h"
#include "proxy.h"

using namespace std;

int main(int argc, char *argv[])
{
    SchoolGirl *mm = new SchoolGirl();
    mm->setName("xiaxia");

    Proxy* proxy = new Proxy(mm);
    proxy->GiveDolls();
    proxy->GiveFlowers();
    proxy->GiveChocolate();
    return 0;
}
