#ifndef BRIDGE_H
#define BRIDGE_H
#include <iostream>

class Implementor
{
public:
    virtual void OperationImp() {}
};

class ConcreteImplementorA: public Implementor
{
public:
    void OperationImp() {
        std::cout << "ConcreteImplementorA Operation!" << std::endl;
    }
};

class ConcreteImplementorB: public Implementor
{
public:
    void OperationImp() {
        std::cout << "ConcreteImplementorB Operation!" << std::endl;
    }
};

class Abstraction
{
public:
    virtual void setImplementor (Implementor* pImplementor) {
        m_pImplementor = pImplementor;
    }
    virtual void Operation() {}
protected:
    Implementor* m_pImplementor;
};

class RefinedAbstraction : public Abstraction
{
public:
    void Operation() {
        m_pImplementor->OperationImp();
    }
};

#endif // BRIDGE_H
