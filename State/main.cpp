#include <iostream>
#include "State.h"

using namespace std;

int main(int argc, char *argv[])
{
    War* war = new War(new ProphaseState());
    for (int i = 1; i < 40; i += 5) {
        war->SetDays(i);
        war->GetState();
    }
    delete war;
    return 0;
}
