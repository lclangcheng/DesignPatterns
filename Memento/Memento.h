#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>
#include <vector>

class Memento
{
public:
    Memento(int vitality, int attack, int defense) {
        m_vitality = vitality;
        m_attack = attack;
        m_defense = defense;
    }

public:
    int m_vitality;
    int m_attack;
    int m_defense;
};

class GameRole
{
public:
    GameRole(): m_vitality(100), m_attack(100), m_defense(100) {}
    Memento* Save() {
        return new Memento(m_vitality, m_attack, m_defense);
    }
    void Load(Memento* memento) {
        m_vitality = memento->m_vitality;
        m_attack = memento->m_attack;
        m_defense = memento->m_defense;
    }
    void Show() {
        std::cout << "vitality : " << m_vitality << ", attack : " << m_attack << ", defense : " << m_defense << std::endl;
    }
    void Attack() {
        m_vitality -= 10;
        m_attack -= 10;
        m_defense -= 10;
    }

private:
    int m_vitality;
    int m_attack;
    int m_defense;
};

class Caretake
{
public:
    Caretake() {}
    void Save(Memento* memento) {
        m_vecMemento.push_back(memento);
    }
    Memento* Load(int state) {
        return m_vecMemento[state];
    }

private:
    std::vector<Memento*> m_vecMemento;
};

#endif // MEMENTO_H
