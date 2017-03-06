#include <iostream>
#include "Observer.h"

using namespace std;

int main(int argc, char *argv[])
{
    Blog* csdn = new BlogCSDN("myBlog");
    Observer* observer = new ObserverBlog("xiaoming", csdn);
    csdn->Attach(observer);
    csdn->SetStatus("My first Notification.");
    csdn->Notify();
    return 0;
}
