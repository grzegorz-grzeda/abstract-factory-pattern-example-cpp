#ifndef OTHERDOER_HPP__
#define OTHERDOER_HPP__

#include "IDoer.hpp"
#include <iostream>

struct OtherDoer : IDoer
{
	void doIt()
	{
		std::cout << "[OTHER DOER]: doing... something else" << std::endl;
	}
};

#endif // !OTHERDOER_HPP__