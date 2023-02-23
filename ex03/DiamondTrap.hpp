#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
	protected:
		std::string		name_;
		
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap& source);
		DiamondTrap& operator=(const DiamondTrap& source);

		void	whoAmI();
};

#endif