#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <iostream>
#include <string>
class Mediator;

class Person
{
public:
    virtual void SetMediator(Mediator* mediator) {}
    virtual void SendMessage(std::string message) {}
    virtual void GetMessage(std::string message) {}
protected:
    Mediator* m_pMediator;
};

class Mediator
{
public:
    virtual void Send(std::string message, Person* person) {}
    virtual void SetA(Person* A) {}
    virtual void SetB(Person* B) {}
};

class Renter: public Person
{
public:
    void SetMediator(Mediator* mediator) {
        m_pMediator = mediator;
    }
    void SendMessage(std::string message) {
        m_pMediator->Send(message, this);
    }
    void GetMessage(std::string message) {
        std::cout << "Renter receive the message: " << message << std::endl;
    }
};

class Landlord: public Person
{
public:
    void SetMediator(Mediator* mediator) {
        m_pMediator = mediator;
    }
    void SendMessage(std::string message) {
        m_pMediator->Send(message, this);
    }
    void GetMessage(std::string message) {
        std::cout << "Landlord receive the message: " << message << std::endl;
    }
};

class HouseMediator: public Mediator
{
public:
    HouseMediator(): m_pA(0), m_pB(0) {}
    void SetA(Person *A) {
        m_pA = A;
    }
    void SetB(Person* B) {
        m_pB = B;
    }
    void Send(std::string message, Person* person) {
        if (person == m_pA)
            m_pB->GetMessage(message);
        else
            m_pA->GetMessage(message);
    }
private:
    Person* m_pA;
    Person* m_pB;
};







#endif // MEDIATOR_H
