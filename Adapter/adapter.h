#ifndef ADAPTER_H
#define ADAPTER_H
#include <iostream>

class Deque
{
public:
    void push_back(int x) { std::cout << "Deque push_back" << std::endl; }
    void push_front(int x) { std::cout << "Deque push_front" << std::endl; }
    void pop_back() { std::cout << "Deque pop_back" << std::endl; }
    void pop_front() { std::cout << "Deque pop_front" << std::endl; }
};

class Sequence
{
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
};

class Stack: public Sequence
{
public:
    void push(int x) { deque.push_back(x); }
    void pop() { deque.pop_back(); }
private:
    Deque deque;
};

class Queue: public Sequence
{
public:
    void push(int x) { deque.push_back(x); }
    void pop() { deque.pop_front(); };
private:
    Deque deque;
};



#endif // ADAPTER_H
