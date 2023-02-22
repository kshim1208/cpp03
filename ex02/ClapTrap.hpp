#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	protected:
		std::string		name_;
		unsigned int 	hit_points_;
		unsigned int 	energy_points_;
		unsigned int 	attack_damage_;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
		virtual ~ClapTrap();
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