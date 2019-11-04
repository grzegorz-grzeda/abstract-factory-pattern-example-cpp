#ifndef OTHERFACTORY_HPP__
#define OTHERFACTORY_HPP__

#include "OtherDoer.hpp"
#include "OtherWaiter.hpp"
#include "IFactory.hpp"

struct OtherFactory : IFactory
{
	IDoer *getNewDoer()
	{
		return new OtherDoer();
	}
	IWaiter *getNewWaiter()
	{
		return new OtherWaiter();
	}
};

#endif // !OTHERFACTORY_HPP__