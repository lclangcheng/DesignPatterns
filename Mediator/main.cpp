#include <iostream>
#include "Mediator.h"

using namespace std;

int main(int argc, char *argv[])
{
    HouseMediator* houseMediator = new HouseMediator();
    Person* renter = new Renter();
    Person* landlord = new Landlord();
    houseMediator->SetA(renter);
    houseMediator->SetB(landlord);
    renter->SetMediator(houseMediator);
    landlord->SetMediator(houseMediator);
    renter->SendMessage("I need to rent a house.");
    landlord->SendMessage("1000 yuan a month.");

    return 0;
}
