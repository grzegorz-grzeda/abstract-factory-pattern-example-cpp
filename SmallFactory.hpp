#ifndef SMALLFACTORY_HPP__
#define SMALLFACTORY_HPP__

#include "SmallDoer.hpp"
#include "SmallWaiter.hpp"
#include "IFactory.hpp"

struct SmallFactory : IFactory
{
	IDoer *getNewDoer()
	{
		return new SmallDoer();
	}
	IWaiter *getNewWaiter()
	{
		return new SmallWaiter();
	}
};

#endif // !SMALLFACTORY_HPP__