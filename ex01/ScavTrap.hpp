#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class ScavTrap : public ClapTrap
{
	private:
		bool	guardMode_;
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		~ScavTrap();
		ScavTrap(const ScavTrap& source);
		ScavTrap& operator=(const ScavTrap& source);
		void	attack(const std::string& target);
		bool	getGuardState(void) const;
		void	guardGate(void);
};

#endif