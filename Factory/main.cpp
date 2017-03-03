#include <iostream>
//#include "SimpleFactory.h"
//#include "FactoryMethod.h"
#include "AbstractFactory.h"

int main()
{
	/*SimpleFactory* factory = new SimpleFactory();
	SingleCore* singleCore = factory->createSingleCore(COREA);
	singleCore->Show();

	delete singleCore;
	
	singleCore = factory->createSingleCore(COREB);
	singleCore->Show();*/


	/*FactoryMethod* factory = new FactoryMethodA();
	SingleCore* singleCoreA = factory->createSingleCore();
	singleCoreA->Show();

	delete factory;

	factory = new FactoryMethodB();
	SingleCore* singleCoreB = factory->createSingleCore();
	singleCoreB->Show();*/

	
	AbstractFactory* factory = new AbstractFactoryA();
	SingleCore* singleCoreA = factory->createSingleCore();
	Multicore* multicoreA = factory->createMulticore();
	singleCoreA->Show();
	multicoreA->Show();

	delete factory;
	
	factory = new AbstractFactoryB();
	SingleCore* singleCoreB = factory->createSingleCore();
	Multicore* multicoreB = factory->createMulticore();
	singleCoreB->Show();
	multicoreB->Show();

	getchar();
	return 0;
}