#ifndef SMALLWAITER_HPP__
#define SMALLWAITER_HPP__

#include "IWaiter.hpp"
#include <iostream>

struct SmallWaiter : IWaiter
{
	void waitForIt()
	{
		std::cout << "[SMALL WAITER]: waiting for... something small" << std::endl;
	}
};

#endif // !SMALLWAITER_HPP__
