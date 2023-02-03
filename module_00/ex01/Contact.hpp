#ifndef _CONTACT_
 # define _CONTACT_

class	Contact{
	public:
		Contact()
		{
			std::cout << "first name: "; 
			std::cin >> data[0];
			std::cout << "last name: "; 
			std::cin >> data[1];
			std::cout << "nick name: "; 
			std::cin >> data[2];
			std::cout << "phone number: "; 
			std::cin >> data[3];
			std::cout << "darkest secret: "; 
			std::cin >> data[4];
		}
		std::string	data[5];
};

#endif
