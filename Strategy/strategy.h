#ifndef STRATEGY_H
#define STRATEGY_H

enum CHARGE {
    NORMAL = 0,
    REBATE,
    RETURN
};

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
    double moneyRebate;
};

class CashReturn: public CashSuper
{
public:
    CashReturn(double moneyCondition, double moneyReturn);
    double accptCash(double money);
private:
    double moneyCondition;
    double moneyReturn;
};

class CashContext
{
public:
    CashContext(enum CHARGE chargeType);
    double getResult(double money);
private:
    CashSuper* cashSuper;
};


#endif // STRATEGY_H
