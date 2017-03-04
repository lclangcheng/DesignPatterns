#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
public:
    Prototype();
};

class Resume
{
public:
    Resume(){}
    virtual ~Resume(){}
    virtual Resume* Clone() { return nullptr; }
    virtual void Show() {}
};

class ResumeA : public Resume
{
public:
    ResumeA(const char* str);
    ResumeA(const ResumeA &r);
    ~ResumeA();
    ResumeA* Clone();
    void Show();

private:
    char *name;
};


#endif // PROTOTYPE_H
