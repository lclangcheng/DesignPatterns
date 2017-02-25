#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H
#include "macro.h"

class SingleCore
{
public:
    virtual void Show() = 0;
};

class SingleCoreA: public SingleCore
{
public:
    void Show();
};

class SingleCoreB: public SingleCore
{
public:
    void Show();
};

class SimpleFactory
{
public:
    SingleCore* CreateSingleCore(enum CTYPE ctype);
};

#endif // SIMPLEFACTORY_H
