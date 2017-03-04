#include <iostream>
#include "Builder.h"

using namespace std;

int main(int argc, char *argv[])
{
    ThinBuilder* thin = new ThinBuilder();
    Director*  director = new Director(thin);
    director->create();
    return 0;
}
