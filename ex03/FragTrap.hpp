#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <string>

class FragTrap : virtual public ClapTrap
{
	protected:
		const static unsigned int	default_hit_points_ = 100;
		const static unsigned int	default_energy_points_ = 100;
		const static unsigned int	default_attack_damage_ = 30;	
	public:
		FragTrap();
		FragTrap(const std::string& name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& source);
		virtual FragTrap& operator=(const FragTrap& source);
		void highFivesGuys(void);
};

#endif