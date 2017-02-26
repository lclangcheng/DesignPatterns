#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
    Person();
    Person(std::string name);
    virtual void Show();
private:
    std::string name;
};

class Finery: public Person
{
public:
    void Decorate(Person* component);
    void Show();
protected:
    Person* component;
};

class TShirts: public Finery
{
public:
    void Show();
};

class Overcoat: public Finery
{
public:
    void Show();
};

class Jeans: public Finery
{
public:
    void Show();
};

class Sneaker: public Finery
{
public:
    void Show();
};

#endif // PERSON_H
