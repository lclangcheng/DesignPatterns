#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H
#include <string>
#include <iostream>
#include <map>

class User {
public:
    User(std::string name) {
        m_name = name;
    }
    std::string GetName() {
        return m_name;
    }
private:
    std::string m_name;
};

class Website
{
public:
    virtual void Use (User* pUser) {}
};

class ConcreteWebsite: public Website
{
public:
    ConcreteWebsite(std::string name) {
        m_siteName = name;
    }
    void Use(User* pUser) {
        std::cout << "Website: " << m_siteName;
        std::cout << " User: " << pUser->GetName() << std::endl;
    }
private:
    std::string m_siteName;

};

class WebsiteFactory
{
public:
    Website* GetWebsiteCategory(std::string key) {
        if (!flyweights.count(key))
            flyweights[key] = new ConcreteWebsite(key);
        return flyweights[key];
    }

    int GetWebsiteCount() { return flyweights.size(); }
private:
    std::map<std::string, Website*> flyweights;
};

#endif // FLYWEIGHT_H
