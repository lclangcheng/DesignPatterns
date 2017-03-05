#include <iostream>
#include "Flyweight.h"

using namespace std;

int main(int argc, char *argv[])
{
    WebsiteFactory *factory = new WebsiteFactory();

    Website* blogs1 = factory->GetWebsiteCategory("Blogs");
    blogs1->Use(new User("xiaoming"));

    Website* blogs2 = factory->GetWebsiteCategory("Blogs");
    blogs2->Use(new User("xiaoxiao"));

    Website* news1 = factory->GetWebsiteCategory("News");
    news1->Use(new User("xiaoqi"));

    std::cout << factory->GetWebsiteCount() << std::endl;
    return 0;
}
