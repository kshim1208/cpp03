#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap()
{
	this->name_ = "FragTrap";
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = FragTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Frag - " << this->name_ << " has been created !!!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	this->name_ = name;
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = FragTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Frag - " << this->name_ << " has been created !!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag - " << this->name_ << " has been destroyed...." << std::endl;
}

FragTrap::FragTrap(const FragTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Frag - " << this->name_ << " has been copy-created !!!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Frag - " << this->name_ << " has been copy-operator-created !!!" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Frag - " << this->name_ << " is trying to do HighFives...." << std::endl;
	if (this->useEnergy(20) == false)
		return ;
	std::cout << "Frag - IT'S HIGHFIVETIMES BY " << this->name_ << " BROOOOOOOOOS!!!!!" << std::endl;
}
