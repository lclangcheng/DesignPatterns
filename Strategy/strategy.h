#ifndef STRATEGY_H
#define STRATEGY_H
#include "macro.h"

class CashSuper
{
public:
    virtual double accptCash(double money) = 0;
};

class CashNormal: public CashSuper
{
public:
    double accptCash(double money);
};

class CashRebate: public CashSuper
{
public:
    CashRebate(double moneyRebate);
    double accptCash(double money);
private:
    double moneyRebate = 0;
};

class CashReturn: public CashSuper
{
public:
    CashReturn(double moneyCondition, double moneyReturn);
    double accptCash(double money);
private:
    double moneyCondition = 0;
    double moneyReturn = 0;
};

class CashContext
{
public:
    CashContext(enum CHARGE chargeType);
    double getResult(double money);
private:
    CashSuper* cashSuper = nullptr;
};


#endif // STRATEGY_H
