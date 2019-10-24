#ifndef ERRORPRINTER_HPP__
#define ERRORPRINTER_HPP__

#include "IErrorListener.hpp"
#include <iostream>

struct ErrorPrinter : IErrorListener
{
	void errorReceived(const char *message)
	{
		std::cout << "ERROR! "
				  << message
				  << std::endl;
	}
};

#endif // !ERRORPRINTER_HPP__