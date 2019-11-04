#ifndef OTHERWAITER_HPP__
#define OTHERWAITER_HPP__

#include "IWaiter.hpp"
#include <iostream>

struct OtherWaiter : IWaiter
{
	void waitForIt()
	{
		std::cout << "[OTHER WAITER]: waiting for... something else" << std::endl;
	}
};

#endif // !OTHERWAITER_HPP__