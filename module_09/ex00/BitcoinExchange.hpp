#ifndef _BITCOINEXCHANGE_HPP_
#define _BITCOINEXCHANGE_HPP_

#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <map>

#define BAD_INPUT 1
#define NEGATIVE_N 2
#define LARGE_N 3

class BitcoinExchange {
	
	public:
		BitcoinExchange();
		~BitcoinExchange();
		int displayChange(std::string &line);
	
	private:
		std::map< std::string, float > map;

		typedef int (BitcoinExchange::*func)(std::string &);
		bool msg_error(int flag);
		int formatDate(std::string &date);
		int formatPipe(std::string &pipe);
		int formatValue(std::string &value);
	
};

#endif
