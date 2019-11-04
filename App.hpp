#ifndef APP_HPP__
#define APP_HPP__

#include "IDoer.hpp"
#include "IWaiter.hpp"

struct App
{
	App(IDoer *d, IWaiter *w) : d(d), w(w) {}

	void run()
	{
		d->doIt();
		w->waitForIt();
		w->waitForIt();
		d->doIt();
		w->waitForIt();
	}

private:
	IDoer *d;
	IWaiter *w;
};

#endif // !APP_HPP__