
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap()
{
	this->name_ = ClapTrap::name_ + "_clap_name";
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been created !!!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
	this->name_ = name + "_clap_name";
	this->hit_points_ = FragTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = FragTrap::default_attack_damage_;
	std::cout << "Diamond - " << this->name_ << " has been created !!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond - " << this->name_ << " has been destroyed...." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source)
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