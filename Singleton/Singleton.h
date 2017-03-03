#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton* GetInstance();
private:
    Singleton() {}
    static Singleton* singleton;
};


#endif // SINGLETON_H
