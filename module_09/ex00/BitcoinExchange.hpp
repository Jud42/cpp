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
#define EARLIER_DATE 4

class BitcoinExchange {
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange &rhs);
		~BitcoinExchange();

		std::map<std::string, float> getMap() const;
		std::tm getStartDate() const;
		int displayChange(std::string &line);
	
	private:
		std::map< std::string, float > map;
		std::tm	start_date;

		void setStartDate(const std::string &date);
		typedef int (BitcoinExchange::*func)(std::string &);
		bool msg_error(int flag);
		bool isEarlierDate(const std::string &date);
		int formatDate(std::string &date);
		int formatPipe(std::string &pipe);
		int formatValue(std::string &value);
	
};

#endif
