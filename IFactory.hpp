#ifndef IFACTORY_HPP__
#define IFACTORY_HPP__

#include "IDoer.hpp"
#include "IWaiter.hpp"

struct IFactory
{
	virtual ~IFactory() {}
	virtual IDoer *getNewDoer() = 0;
	virtual IWaiter *getNewWaiter() = 0;
};

#endif // !IFACTORY_HPP__
