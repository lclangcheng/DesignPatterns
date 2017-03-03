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

class Multicore
{
public:
	virtual void Show() = 0;
};

class MulticoreA: public Multicore
{
public:
	void Show() { std::cout << "MulticoreA!" << std::endl; }
};

class MulticoreB: public Multicore
{
public:
	void Show() { std::cout << "MulticoreB!" << std::endl; }
};

class AbstractFactory
{
public:
	virtual SingleCore* createSingleCore() = 0;
	virtual Multicore* createMulticore() = 0;
};

class AbstractFactoryA: public AbstractFactory 
{
public:
	SingleCore* createSingleCore() {
		return new SingleCoreA();
	}

	Multicore* createMulticore() {
		return new MulticoreA();
	}
};

class AbstractFactoryB: public AbstractFactory
{
public:
	SingleCore* createSingleCore() {
		return new SingleCoreB();
	}
	
	Multicore* createMulticore() {
		return new MulticoreB();
	}
};
