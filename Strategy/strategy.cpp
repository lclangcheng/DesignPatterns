#include "strategy.h"
#include <math.h>

double CashNormal::accptCash(double money) {
    return money;
}

CashRebate::CashRebate(double moneyRebate) {
    this->moneyRebate = moneyRebate;
}

double CashRebate::accptCash(double money) {
    return money * this->moneyRebate;
}

CashReturn::CashReturn(double moneyCondition, double moneyReturn) {
    this->moneyCondition = moneyCondition;
    this->moneyReturn = moneyReturn;
}

double CashReturn::accptCash(double money) {
    return money - floor(this->moneyCondition / money) * this->moneyReturn;
}

CashContext::CashContext(CHARGE chargeType) {
    switch (chargeType) {
    case CHARGE::NORMAL:
        this->cashSuper = new CashNormal();
        break;
    case CHARGE::REBATE:
        this->cashSuper = new CashRebate(0.8);
        break;
    case CHARGE::RETURN:
        this->cashSuper = new CashReturn(300, 100);
        break;
    default:
        break;
    }
}

double CashContext::getResult(double money) {
    return this->cashSuper->accptCash(money);
}

