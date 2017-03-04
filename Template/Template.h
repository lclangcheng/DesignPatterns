#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <iostream>

class Resume
{
protected:
    virtual void SetPersonalInfo() {}
    virtual void SetEducation() {}
    virtual void SetWorkExp() {}
public:
    void FillResume() {
        SetPersonalInfo();
        SetEducation();
        SetWorkExp();
    }
};

class ResumeA: public Resume
{
protected:
    void SetPersonalInfo() { std::cout << "ResumeA SetPersonalInfo." << std::endl; }
    void SetEducation() { std::cout << "ResumeA SetEdcation." << std::endl; }
    void SetWorkExp() { std::cout << "ResumeA SetWorkExp." << std::endl; }
};

#endif // TEMPLATE_H
