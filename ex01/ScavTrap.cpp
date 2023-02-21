
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
	this->name_ = "ScavTrap";
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
	std::cout << this->name_ << " (SCAV) has been created !!!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->name_ = name;
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
	std::cout << this->name_ << " (SCAV) has been created !!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name_ << " (SCAV) has been destroyed...." << std::endl;
}

// // source가 ClapTrap일 수도 있을까?
// ScavTrap::ScavTrap(const ScavTrap& source)
// {
// }

void	ScavTrap::guardGate()
{
	// 시도하고 있다!
	if (this->useEnergy(1) == false)
		return ;

}
