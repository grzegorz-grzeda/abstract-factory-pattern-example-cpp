#include "SystemFactory.hpp"
#include "App.hpp"

int main(int argc, char *argv[])
{
	auto factory = new SystemFactory(true);
	auto doer = factory->getNewDoer();
	auto waiter = factory->getNewWaiter();

	auto app = new App(doer, waiter);

	app->run();

	delete app;
	delete waiter;
	delete doer;
	delete factory;

	return 0;
}