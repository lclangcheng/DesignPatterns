#include "Singleton.h"

Singleton* Singleton::singleton = nullptr;  
Singleton* Singleton::GetInstance()  
{  
    if(singleton == nullptr)
        singleton = new Singleton();  
    return singleton;  
}  
