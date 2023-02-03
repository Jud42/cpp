#ifndef _PHONEBOOK_
 # define _PHONEBOOK_

class PhoneBook{
	public:
		PhoneBook()
		{
			for (int i = 0; i < 8; i++)
				contact[i] = nullptr;
			index = 0;
		}
		void	add_();
		void	search_() const;
		void	exit_();
	private:
		Contact*	contact[8];
		int		index;
};

#endif
