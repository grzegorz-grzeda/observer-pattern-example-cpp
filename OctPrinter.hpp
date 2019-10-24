#ifndef OCTPRINTER_HPP__
#define OCTPRINTER_HPP__

#include "IDataListener.hpp"
#include <iostream>
#include <iomanip>

struct OctPrinter : IDataListener
{
	void dataReceived(int number)
	{
		std::cout << "OCT: "
				  << std::oct
				  << std::setfill('0')
				  << std::setw(8)
				  << number
				  << std::endl;
	}
};

#endif // !OCTPRINTER_HPP__