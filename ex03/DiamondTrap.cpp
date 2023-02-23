
#include "DiamondTrap.hpp"

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap_clap_name"), FragTrap("ClapTrap_clap_name"), ScavTrap("ClapTrap_clap_name")
{
	this->name_ = "DiamondTrap";
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been created !!!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name_ = name;
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been created !!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond - " << this->name_ << " has been destroyed...." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source) : ClapTrap(source.name_ + "_clap_name"), FragTrap(source.name_ + "_clap_name"), ScavTrap(source.name_ + "_clap_name")
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been copy-created !!!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been copy-operator-created !!!" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	if (this->checkHitPoints() == false || this->useEnergy(this->energy_points_) == false)
		return ;
	std::cout << "Diamond - " << this->name_ << " IS IN PERSONALITY CRISIS!!!!" << std::endl;
	std::cout << "Diamond - MY NAME IS..... <" << this->name_ << ">..... AND CLAPTAP'S NAME IS...... <" << this->ClapTrap::name_ << ">.....!!!!! " << std::endl;
}
