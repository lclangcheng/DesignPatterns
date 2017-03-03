#include <iostream>
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
	void Show() { std::cout << "SingleCoreB!" << std::endl; }
};

class FactoryMethod
{
public:
	virtual SingleCore* createSingleCore() = 0;
};

class FactoryMethodA: public FactoryMethod
{
public:
	SingleCore* createSingleCore() {
		return new SingleCoreA();
	}
};

class FactoryMethodB: public FactoryMethod
{
public:
	SingleCore* createSingleCore() {
		return new SingleCoreB();
	}
};