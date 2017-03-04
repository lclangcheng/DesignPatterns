#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <string>
#include <iostream>
#include <list>

class Company
{
public:
    Company(std::string name) { m_name = name; }
    virtual ~Company() {}
    virtual void Add(Company* pCom) {}
    virtual void Show(int depth) {}
protected:
    std::string m_name;
};

class ConcreteCompany: public Company
{
public:
    ConcreteCompany(std::string name): Company(name) {}
    virtual ~ConcreteCompany() {}
    void Add(Company* pCom) {
        m_listCompany.push_back(pCom);
    }
    void Show(int depth) {
        for (int i = 0; i < depth; i++) {
            std::cout << "-";
        }
        std::cout << m_name << std::endl;
        std::list<Company*>::iterator iter = m_listCompany.begin();
        for(; iter != m_listCompany.end(); iter++) {
            (*iter)->Show(depth + 2);
        }
    }

private:
    std::list<Company*> m_listCompany;
};

class FinanceDepartment: public Company
{
public:
    FinanceDepartment(std::string name): Company(name) {}
    ~FinanceDepartment() {}
    void Show(int depth) {
        for (int i = 0; i < depth; i ++) {
            std::cout << "-";
        }
        std::cout << m_name << std::endl;
    }
};

class HRDepartment: public Company
{
public:
    HRDepartment(std::string name): Company(name) {}
    ~HRDepartment() {}
    void Show(int depth) {
        for (int i = 0; i < depth; i++) {
            std::cout << "-";
        }
        std::cout << m_name << std::endl;
    }
};

#endif // COMPOSITE_H
