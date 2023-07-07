#include "BitcoinExchange.hpp"

bool	isMsg_error(int flag, std::string &line) {

	if (flag == 0)
		return false;
	else if (flag == BAD_INPUT)
		std::cout << "Error: bad input => " << line << std::endl;
	else if (flag == NEGATIVE_N)
		std::cout << "Error: not a positive number." << std::endl;
	else
		std::cout << "Error: too large a number." << std::endl;
	return true;
}
BitcoinExchange::BitcoinExchange() {

	std::string line;
	std::string key;
	float value;
	std::ifstream ifs("database/data.csv");

	if (ifs.is_open()) {
		std::getline(ifs, line);
		while (std::getline(ifs, line)) {
			key = line.substr(0, line.find(",")); 
			value = std::atof((line.substr(line.find(",") + 1, line.size())).c_str());
			map[key] = value;
		}
	}
}

BitcoinExchange::~BitcoinExchange() {}

int	BitcoinExchange::formatDate(std::string &date) {

	std::tm t = {};
	const char *res = strptime(date.c_str(), "%Y-%m-%d", &t);
	if (res == NULL || *res != '\0')
		return BAD_INPUT;
	return 0;
}

int	BitcoinExchange::formatPipe(std::string &pipe) {
	return ((pipe == "|") ? 0 : BAD_INPUT);
}

int	BitcoinExchange::formatValue(std::string &value) {
	
	int dot = 0;
	for (unsigned int i = 0; i < value.size(); i++) {
		const char a = value.at(i);
		if ((a == '-' && i != 0) || 
			(!std::isdigit(a) && a != '.' && a != '-'))
			return BAD_INPUT;
		else if (a == '.') {
			dot++;
			if (dot > 1)
				return BAD_INPUT;
		}
	}	

	long tmp;
	char *endptr;
	if (value.find(".") != std::string::npos)
		tmp = std::strtol(value.c_str(), &endptr, 10);
	else
		tmp = static_cast<long>(round(std::strtod(value.c_str(), &endptr)));
	if (tmp < 0 || tmp > 1000)
		return ((tmp < 0) ? NEGATIVE_N : LARGE_N);
	return 0;
}

int	BitcoinExchange::displayChange(std::string &line) {

	//use at() for access element map bcause he use a exception
	int i = 0;
	size_t pos = line.find(" ");
	while (pos != std::string::npos && ++i < 3)
		pos = line.find(" ", pos + 1);
	if (i > 2) 
		return isMsg_error(BAD_INPUT, line);//code error format

	func f[3] = {&BitcoinExchange::formatDate, 
		&BitcoinExchange::formatPipe, &BitcoinExchange::formatValue};
	std::istringstream iss(line);
	std::string word[3];
	i = 0;
	while (iss >> word[i]) {
		if (isMsg_error((this->*f[i])(word[i]), line))
			return 1;
		i++;
	}
	std::map<std::string, float>::iterator it = map.find(word[0]);
	float change;
	if (it != map.end()) 
		change = it->second * std::atof(word[2].c_str());
	else {
		for (it = map.end(); it != map.begin(); ) {
			it--;
			if (it->first < word[0]) {
				change = it->second * std::atof(word[2].c_str());
				break ;
			}
		}
	}
	std::cout << word[0] << " => " << word[2]
		<< " = " << change << std::endl;
	return 0;
}

