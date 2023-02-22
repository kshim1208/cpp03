#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(const std::string& name);
		~FragTrap();
		FragTrap(const FragTrap& source);
		FragTrap& operator=(const FragTrap& source);
		void highFivesGuys(void);
};

#endif