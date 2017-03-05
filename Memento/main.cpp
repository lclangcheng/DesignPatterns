#include <iostream>
#include "Memento.h"

using namespace std;

int main(int argc, char *argv[])
{
    Caretake caretake;
    GameRole role;
    role.Show();
    caretake.Save(role.Save());
    role.Attack();
    role.Show();
    role.Load(caretake.Load(0));
    role.Show();
    return 0;
}
