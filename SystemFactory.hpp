#ifndef SYSTEMFACTORY_HPP__
#define SYSTEMFACTORY_HPP__

#include "SmallFactory.hpp"
#include "OtherFactory.hpp"

struct SystemFactory : IFactory
{
	SystemFactory(bool isSmallArchitecture)
	{
		if (isSmallArchitecture)
			f = new SmallFactory;
		else
			f = new OtherFactory;
	}
	~SystemFactory() { delete f; }

	IDoer *getNewDoer()
	{
		return f->getNewDoer();
	}

	IWaiter *getNewWaiter()
	{
		return f->getNewWaiter();
	}

private:
	IFactory *f;
};

#endif // !SYSTEMFACTORY_HPP__