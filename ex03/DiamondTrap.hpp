#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name_;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& source);
		DiamondTrap& operator=(const DiamondTrap& source);
};

#endif