
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
	FragTrap Foo("Foo");
	ScavTrap Boo("Boo");

	Boo.announceAttribute();
	Foo.announceAttribute();
	std::cout << "----------------------------" << std::endl;

	Boo.attack(Foo.getName());
	Foo.takeDamage(Boo.getAttackDamage());
	Boo.guardGate();
	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Boo.beRepaired(5);

	std::cout << "----------------------------" << std::endl;

	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(10);
	Foo.beRepaired(10);

	std::cout << "----------------------------" << std::endl;

	Foo.attack(Boo.getName());
	Foo.highFivesGuys();
	Foo.highFivesGuys();
	std::cout << "----------------------------" << std::endl;
}
