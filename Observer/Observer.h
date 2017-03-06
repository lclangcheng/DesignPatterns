#ifndef OBSERVER_H
#define OBSERVER_H
#include <list>
#include <iostream>
#include <string>

class Observer
{
public:
    Observer() {}
    virtual ~Observer() {}
    virtual void Update() {}
};

class Blog
{
public:
    Blog() {}
    virtual ~Blog() {}
    void Attach(Observer* observer) {
        m_observers.push_back(observer);
    }
    void Remove(Observer* observer) {
        m_observers.remove(observer);
    }
    void Notify() {
        std::list<Observer*>::iterator iter = m_observers.begin();
        for (; iter != m_observers.end(); iter++)
        {
            (*iter)->Update();
        }
    }
    virtual void SetStatus(std::string status) { m_status = status; }
    virtual std::string GetStatus() { return m_status; }
private:
    std::list<Observer*> m_observers;
protected:
    std::string m_status;
};

class BlogCSDN: public Blog
{
public:
    BlogCSDN(std::string name): m_name(name) {}
    ~BlogCSDN() {}
    void SetStatus(std::string status) {
        m_status = "CSDN NOTIFICATION: " + m_name + " " + status;
    }
    std::string GetStatus() {
        return m_status;
    }
private:
    std::string m_name;
};

class ObserverBlog: public Observer
{
public:
    ObserverBlog(std::string name, Blog* blog): m_name(name), m_blog(blog){}
    ~ObserverBlog(){}
   void Update() {
        std::string status = m_blog->GetStatus();
        std::cout << "----------------" << status << std::endl;
   }
private:
    std::string m_name;
    Blog* m_blog;

};


#endif // OBSERVER_H
