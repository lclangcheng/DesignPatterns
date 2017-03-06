#include <iostream>
#include "ChainOfResponsiblity.h"

using namespace std;

int main(int argc, char *argv[])
{
    Manager* generalManager = new GeneralManager(NULL, "A");
    Manager* majordomo = new Majordomo(generalManager, "B");
    Manager* commonManager = new CommonManager(majordomo, "C");
    commonManager->DealWithRequest("D", 700);
    commonManager->DealWithRequest("E", 1200);
    commonManager->DealWithRequest("F", 300);
    return 0;
}
