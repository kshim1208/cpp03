
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	this->name_ = "ScavTrap";
	this->guardMode_ = false;
	std::cout << "Scav - " << this->name_ << " has been created !!!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(100, 50, 20)
{
	this->name_ = name;
	this->guardMode_ = false;
	std::cout << "Scav - " << this->name_ << " has been created !!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav - " << this->name_ << " has been destroyed...." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source.hit_points_, source.energy_points_, source.attack_damage_)
{
	this->name_ = source.name_;
	this->guardMode_ = false;
	std::cout << "Scav - " << this->name_ << " has been copy-created !!!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Scav - " << this->name_ << " has been copy-operator-created !!!" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "Scav - " << this->name_ << " is trying to attack...." << std::endl;
	if (this->useEnergy(5) == false)
		return ;
	std::cout << "Scav - " << this->name_ << " attacked " << target << " !!! " << std::endl;
}

bool	ScavTrap::getGuardState() const
{
	return (this->guardMode_);
}

void	ScavTrap::guardGate()
{
	std::cout << "Scav - " << this->name_ << " is trying to activate Guardian Mode......"  <<  std::endl;
	if (this->guardMode_ == true)
	{
		std::cout << "Scav - " << this->name_ << " is already in Guardian Mode !!!"  <<  std::endl;
		if (this->useEnergy(1) == false)
			return ;
		std::cout << "Scav - " << this->name_ << " ends its Guardian Mode !!!"  <<  std::endl;
		this->guardMode_ = false;
	}
	if (this->useEnergy(10) == false)
		return ;
	else
	{
		this->guardMode_ = true;
		std::cout << "Scav - " << this->name_ << " in Guardian Mode !!!"  <<  std::endl;
	}
}
