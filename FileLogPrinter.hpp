#ifndef FILELOGPRINTER_HPP__
#define FILELOGPRINTER_HPP__

#include "IDataListener.hpp"
#include <fstream>
#include <iomanip>
#include <ctime>
#include <chrono>

struct FileLogPrinter : IDataListener
{
	void dataReceived(int number)
	{
		std::fstream fs("log.txt",
						std::fstream::out | std::fstream::app);

		auto now = std::chrono::system_clock::now();
		auto in_time_t = std::chrono::system_clock::to_time_t(now);
		auto tm = std::localtime(&in_time_t);

		fs << "["
		   << std::put_time(tm, "%Y:%m:%d %H:%M:%S")
		   << "] "
		   << number << std::endl;

		fs.close();
	}
};

#endif // !FILELOGPRINTER_HPP__