#ifndef IERRORLISTENER_HPP__
#define IERRORLISTENER_HPP__

struct IErrorListener
{
	virtual ~IErrorListener() {}

	virtual void errorReceived(const char *message) = 0;
};

#endif // !IERRORLISTENER_HPP__