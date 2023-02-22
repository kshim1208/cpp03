#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& source);
		FragTrap& operator=(const FragTrap& source);
		void highFivesGuys(void);
};

#endif