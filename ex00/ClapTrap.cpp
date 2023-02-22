
#include "ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap()
{
	this->name_ = "ClapTrap";
	this->hit_points_ = 10;
	this->energy_points_ = 10;
	this->attack_damage_ = 0;
	std::cout << "Clap - " << this->name_ << " has been created !!!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
	this->name_ = name;
	this->hit_points_ = 10;
	this->energy_points_ = 10;
	this->attack_damage_ = 0;
	std::cout << "Clap - " << this->name_ << " has been created !!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap - " << this->name_ << " has been destroyed...." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Clap - " << this->name_ << " has been created !!!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& source)
{
	this->name_ = source.name_;
	this->hit_points_ = source.hit_points_;
	this->energy_points_ = source.energy_points_;
	this->attack_damage_ = source.attack_damage_;
	std::cout << "Clap - " << this->name_ << " has been created !!!" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "Clap - " << this->name_ << " is trying to attack...." << std::endl;
	if (this->useEnergy(1) == false)
		return ;
	std::cout << "Clap - " << this->name_ << " attacked " << target << " !!! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points_ < amount)
	{
		this->hit_points_ = 0;	
	}
	else
	{
		this->hit_points_ -= amount;
	}
	std::cout << "Clap - " << this->name_ << " have taken " << amount << " Damage !!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Clap - " << this->name_ << " is trying to repairing...." << std::endl;
	if (this->useEnergy(1) == false)
		return ;
	this->hit_points_ += amount;
	std::cout << "Clap - " << this->name_ << " repaired itself for " << amount << " !! (currently " << this->hit_points_ << " hitpoints left)" << std::endl;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attack_damage_);
}

std::string	ClapTrap::getName() const
{
	return (this->name_);
}

bool	ClapTrap::useEnergy(unsigned int amount)
{
	if (this->energy_points_ < amount || this->energy_points_ == 0)
	{
		std::cout << "Clap - " << this->name_ << " can't do that !! it has " << this->energy_points_ << " energy left !!" << std::endl; 
		return false;
	}
	this->energy_points_ -= amount;
	std::cout << "Clap - " << this->name_ << " used " << amount << " Energy!! (" << this->energy_points_ << " left)" << std::endl;
	return true;
}
