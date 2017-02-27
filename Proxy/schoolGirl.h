#ifndef SCHOOLGIRL_H
#define SCHOOLGIRL_H
#include <string>

class SchoolGirl
{
public:
    SchoolGirl();
    std::string getName();
    void setName(std::string name);
private:
    std::string name;
};

#endif // SCHOOLGIRL_H
