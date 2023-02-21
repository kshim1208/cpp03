#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

# include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		~ScavTrap();
		ScavTrap(const ScavTrap& source);
		ScavTrap& operator=(const ScavTrap& source);
		void	guardGate(void);
};

#endif