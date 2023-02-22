#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class ScavTrap : virtual public ClapTrap
{
	private:
		bool	guardMode_;
		const static unsigned int	default_hit_points_ = 100;
		const static unsigned int	default_energy_points_ = 50;
		const static unsigned int	default_attack_damage_ = 20;

	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap& source);
		ScavTrap& operator=(const ScavTrap& source);
		void	attack(const std::string& target);
		bool	getGuardState(void) const;
		void	guardGate(void);
};

#endif