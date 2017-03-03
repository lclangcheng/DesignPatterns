#include <iostream>
#include "adapter.h"

using namespace std;

int main(int argc, char *argv[])
{
    Sequence* stack = new Stack();
    stack->push(33);
    stack->pop();

    Sequence* queue = new Queue();
    queue->push(11);
    queue->pop();

    return 0;
}
