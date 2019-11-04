#ifndef IDOER_HPP__
#define IDOER_HPP__

struct IDoer
{
	virtual ~IDoer() {}
	virtual void doIt() = 0;
};

#endif // !IDOER_HPP__
