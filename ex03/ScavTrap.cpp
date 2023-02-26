
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
	this->name_ = "ScavTrap";
	this->hit_points_ = ScavTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = ScavTrap::default_attack_damage_;
	this->guardMode_ = false;
	std::cout << "Scav - " << this->name_ << " has been created !!!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->name_ = name;
	this->hit_points_ = ScavTrap::default_hit_points_;
	this->energy_points_ = ScavTrap::default_energy_points_;
	this->attack_damage_ = ScavTrap::default_attack_damage_;
	this->guardMode_ = false;
	std::cout << "Scav - " << this->name_ << " has been created !!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav - " << this->name_ << " has been destroyed...." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
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
	std::cout << "Scav - " << this->name_ << " attacked " << target << ", causing " << this->attack_damage_ << " points of damage !!! " << std::endl;
}

bool	ScavTrap::getGuardState() const
{
	return (this->guardMode_);
}

void	ScavTrap::guardGate()
{
	std::cout << "Scav - " << this->name_ << " is trying to activate Gate keeper Mode......"  <<  std::endl;
	if (this->getGuardState() == true)
	{
		std::cout << "Scav - " << this->name_ << " is already in Gate keeper Mode !!!"  <<  std::endl;
		if (this->checkHitPoints() == false || this->useEnergy(1) == false)
			return ;
		std::cout << "Scav - " << this->name_ << " ends its Gate keeper Mode !!!"  <<  std::endl;
		this->guardMode_ = false;
		return ;
	}
	if (this->checkHitPoints() == false || this->useEnergy(10) == false)
		return ;
	else
	{
		this->guardMode_ = true;
		std::cout << "Scav - " << this->name_ << " in Gate keeper Mode !!!"  <<  std::endl;
	}
}
