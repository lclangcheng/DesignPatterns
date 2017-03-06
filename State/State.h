#ifndef STATE_H
#define STATE_H
#include <iostream>

class War;
class State
{
public:
    virtual void Prophase() {}
    virtual void Metaphase() {}
    virtual void Anaphase() {}
    virtual void End() {}
    virtual void CurrentState(War* war) {}
};

class War
{
private:
    State* m_state;
    int m_days;
public:
    War(State* state): m_state(state), m_days(0) {}
    ~War() { delete m_state; }
    int GetDays() { return m_days; }
    void SetDays(int days) {
        m_days = days;
    }
    void SetState(State* state) {
        delete m_state;
        m_state = state;
    }
    void GetState() {
        m_state->CurrentState(this);
    }
};

class EndState: public State {
public:
    void End(War* war) {
        std::cout << war->GetDays() << " End" << std::endl;
    }
    void CurrentState(War* war) {
        End(war);
    }
};

class AnaphaseState: public State {
public:
    void Anaphase(War* war) {
        if (war->GetDays() < 30) {
            std::cout << war->GetDays() << " Anaphase" << std::endl;
        } else {
            war->SetState(new EndState());
        }
    }
    void CurrentState(War* war) {
        Anaphase(war);
    }
};

class MetaphaseState: public State
{
public:
    void Metaphase(War* war) {
        if (war->GetDays() < 20)
        {
            std::cout << war->GetDays() << " Metaphase" << std::endl;
        } else {
            war->SetState(new AnaphaseState());
        }
    }
    void CurrentState(War* war) {
        Metaphase(war);
    }
};

class ProphaseState: public State
{
public:
    void Prophase(War* war) {
        if (war->GetDays() < 10) {
            std::cout << war->GetDays() << " Prophase" << std::endl;
        } else {
            war->SetState(new MetaphaseState());
        }
    }
    void CurrentState(War* war) {
        Prophase(war);
    }
};


#endif // STATE_H
