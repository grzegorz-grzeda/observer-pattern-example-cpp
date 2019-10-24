#ifndef HEXPRINTER_HPP__
#define HEXPRINTER_HPP__

#include "IDataListener.hpp"
#include <iostream>
#include <iomanip>

struct HexPrinter : IDataListener
{
	void dataReceived(int number)
	{
		std::cout << "HEX: "
				  << std::hex
				  << std::uppercase
				  << std::setfill('0')
				  << std::setw(8)
				  << number
				  << std::endl;
	}
};

#endif // !HEXPRINTER_HPP__