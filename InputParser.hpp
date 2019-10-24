#ifndef INPUTPARSER_HPP__
#define INPUTPARSER_HPP__

#include <vector>
#include <sstream>
#include <string>
#include "IDataListener.hpp"
#include "IErrorListener.hpp"

struct InputParser
{
	void addDataListener(IDataListener *listener)
	{
		dataListeners.push_back(listener);
	}

	void addErrorListener(IErrorListener *listener)
	{
		errorListeners.push_back(listener);
	}

	int parse(int argc, char *argv[])
	{
		int result = 0;

		if (argc < 2)
		{
			printError("No data :(");

			result = -1;
		}
		else
		{
			for (int i = 1; i < argc; i++)
			{
				char check;
				int number;
				std::istringstream s(argv[i]);
				s >> number;

				if (s.fail() || s.get(check))
					printError(argv[i] + std::string("is not a number"));
				else
					printData(number);
			}
		}

		return result;
	}

private:
	std::vector<IDataListener *> dataListeners;
	std::vector<IErrorListener *> errorListeners;

	void printError(std::string message)
	{
		for (auto listener : errorListeners)
			listener->errorReceived(message.c_str());
	}

	void printData(int data)
	{
		for (auto listener : dataListeners)
			listener->dataReceived(data);
	}
};

#endif // !INPUTPARSER_HPP__