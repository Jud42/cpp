#ifndef _CONTACT_
 # define _CONTACT_

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class	Contact {
	public:
		
		Contact();
		void setContact();
		std::string	getInfo(int n) const;
		~Contact() {}

	private:

		std::string _info[5];
};

#endif
