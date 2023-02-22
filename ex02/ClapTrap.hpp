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
		
	private:
		const static unsigned int	default_hit_points_ = 10;
		const static unsigned int	default_energy_points_ = 10;
		const static unsigned int	default_attack_damage_ = 0;	
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& source);
		ClapTrap& operator=(const ClapTrap& source);
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
		unsigned int	getAttackDamage(void) const;
		bool	useEnergy(unsigned int amount);
};

#endif