#include "InputParser.hpp"
#include "DecPrinter.hpp"
#include "HexPrinter.hpp"
#include "OctPrinter.hpp"
#include "ErrorPrinter.hpp"

int main(int argc, char *argv[])
{
	InputParser ip;

	auto dec = new DecPrinter();
	auto hex = new HexPrinter();
	auto oct = new OctPrinter();
	auto err = new ErrorPrinter();

	ip.addDataListener(dec);
	ip.addDataListener(hex);
	ip.addDataListener(oct);
	ip.addErrorListener(err);

	auto result = ip.parse(argc, argv);

	delete err;
	delete oct;
	delete hex;
	delete dec;

	return result;
}