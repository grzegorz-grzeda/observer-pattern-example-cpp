#ifndef DECPRINTER_HPP__
#define DECPRINTER_HPP__

#include "IDataListener.hpp"
#include <iostream>
#include <iomanip>

struct DecPrinter : IDataListener
{
	void dataReceived(int number)
	{
		std::cout << "DEC: "
				  << std::dec
				  << std::setw(8)
				  << number << std::endl;
	}
};

#endif // !DECPRINTER_HPP__