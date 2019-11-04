#ifndef SMALLDOER_HPP__
#define SMALLDOER_HPP__

#include "IDoer.hpp"
#include <iostream>

struct SmallDoer : IDoer
{
	void doIt()
	{
		std::cout << "[SMALL DOER]: doing... something small" << std::endl;
	}
};

#endif // !SMALLDOER_HPP__
