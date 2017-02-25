#ifndef STRATEGY_H
#define STRATEGY_H

class CashSuper
{
public:
    virtual double accptCash(double money);
};

class CashNormal: CashSuper
{
public:
    double accptCash(double money);
};

class CashRebate: CashSuper
{
public:
    CashRebate(float moneyRebate);
    double accptCash();
private:
    float moneyRebate = 0;
};

class CashReturn: CashSuper
{
public:
    CashReturn(float moneyCondition, float moneyReturn);
    double accptCash(double money);
};

#endif // STRATEGY_H
