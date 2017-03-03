#include <iostream>

enum CTYPE 
{
	COREA,
	COREB
};
class SingleCore
{
public:
	virtual void Show() = 0;
};

class SingleCoreA: public SingleCore
{
public:
	void Show() { std::cout << "SingleCoreA!" << std::endl; }
};

class SingleCoreB: public SingleCore
{
public:
	void Show() { std::cout << "SignleCoreB!" << std::endl; }

};

class SimpleFactory
{
public:
	SingleCore* createSingleCore(enum CTYPE ctype)
	{
		if (ctype == COREA) {
			return new SingleCoreA();
		} else if (ctype == COREB) {
			return new SingleCoreB();
		} else {
			return NULL;
		}
	}
};

