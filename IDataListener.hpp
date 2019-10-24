#ifndef IDATALISTENER_HPP__
#define IDATALISTENER_HPP__

struct IDataListener
{
	virtual ~IDataListener() {}

	virtual void dataReceived(int number) = 0;
};

#endif // !IDATALISTENER_HPP__