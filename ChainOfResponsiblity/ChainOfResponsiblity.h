#ifndef CHAINOFRESPONSIBLITY_H
#define CHAINOFRESPONSIBLITY_H
#include <iostream>
#include <string>

class Manager
{
public:
    Manager(Manager* manager, std::string name) {
        m_manager = manager;
        m_name = name;
    }
    virtual void DealWithRequest(std::string name, int num) {}
protected:
    Manager* m_manager;
    std::string m_name;
};

class CommonManager: public Manager
{
public:
    CommonManager(Manager* manager, std::string name): Manager(manager, name) {}
    void DealWithRequest(std::string name, int num) {
        if (num < 500)
        {
            std::cout << "CommonManager " << m_name << " agree " << name << " raises " << num << " Yuan." << std::endl;
        } else {
            m_manager->DealWithRequest(name, num);
        }
    }
};

class Majordomo: public Manager
{
public:
    Majordomo(Manager* manager, std::string name): Manager(manager, name) {}
    void DealWithRequest(std::string name, int num) {
        if (num < 1000)
        {
            std::cout << "Majordomo " << m_name << " agree " << name << " raises " << num << " Yuan." << std::endl;
        } else {
            m_manager->DealWithRequest(name, num);
        }
    }
};

class GeneralManager: public Manager
{
public:
    GeneralManager(Manager* manager, std::string name): Manager(manager, name) {}
    void DealWithRequest(std::string name, int num) {
        std::cout << "GeneralManager " << m_name << " agree " << name << " raises " << num << " Yuan." << std::endl;
    }
};


#endif // CHAINOFRESPONSIBLITY_H
