#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
		std::string		name_;
		unsigned int 	hit_points_;
		unsigned int 	energy_points_;
		unsigned int 	attack_damage_;
		const static unsigned int	default_hit_points_ = 10;
		const static unsigned int	default_energy_points_ = 10;
		const static unsigned int	default_attack_damage_ = 0;		
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		~ClapTrap();
		ClapTrap(const ClapTrap& source);
		ClapTrap& operator=(const ClapTrap& source);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
		unsigned int	getAttackDamage(void) const;
		bool	useEnergy(unsigned int amount);
};

#endif