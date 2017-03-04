#include <iostream>
#include "Prototype.h"
using namespace std;

int main(int argc, char *argv[])
{
    Resume* resume1 = new ResumeA("A");
    Resume* resume2 = resume1->Clone();
    resume1->Show();
    resume2->Show();

    std::cout << resume1 << std::endl;
    std::cout << resume2 << std::endl;
    return 0;
}
