#ifndef IWAITER_HPP__
#define IWAITER_HPP__

struct IWaiter
{
	virtual ~IWaiter() {}
	virtual void waitForIt() = 0;
};

#endif // !IWAITER_HPP__