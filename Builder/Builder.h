#ifndef BUILDER_H
#define BUILDER_H
#include <iostream>

class Builder
{
public:
    virtual void BuildHead() {}
    virtual void BuildBody() {}
    virtual void BuildLeftArm() {}
    virtual void BuildRightArm() {}
    virtual void BuildLeftLeg() {}
    virtual void BuildRightLeg() {}
};

class FatBuilder: public Builder
{
    void BuildHead() { std::cout << "Fat BuildHead." << std::endl; }
    void BuildBody() { std::cout << "Fat BuildBody." << std::endl; }
    void BuildLeftArm() { std::cout << "Fat BuildLeftArm." << std::endl; }
    void BuildRightArm() { std::cout << "Fat BuildRightArm." << std::endl; }
    void BuildLeftLeg() { std::cout << "Fat BuildLeftLeg." << std::endl; }
    void BuildRightLeg() { std::cout << "Fat BuildRightLeg." << std::endl; }
};

class ThinBuilder: public Builder
{
    void BuildHead() { std::cout << "Thin BuildHead." << std::endl; }
    void BuildBody() { std::cout << "Thin BuildBody." << std::endl; }
    void BuildLeftArm() { std::cout << "Thin BuildLeftArm." << std::endl; }
    void BuildRightArm() { std::cout << "Thin BuildRightArm." << std::endl; }
    void BuildLeftLeg() { std::cout << "Thin BuildLeftLeg." << std::endl; }
    void BuildRightLeg() { std::cout << "Thin BuildRightLeg." << std::endl; }
};

class Director
{
public:
    Director(Builder* builder) { this->m_pBuilder = builder; }
    void create() {
        m_pBuilder->BuildHead();
        m_pBuilder->BuildBody();
        m_pBuilder->BuildLeftArm();
        m_pBuilder->BuildRightArm();
        m_pBuilder->BuildLeftLeg();
        m_pBuilder->BuildRightLeg();
    }

private:
    Builder* m_pBuilder;
};

#endif // BUILDER_H
