
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap Boo("Boo");
	ScavTrap Foo("Foo");

	std::cout << "----------------------------" << std::endl;

	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());

	std::cout << "----------------------------" << std::endl;

	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(10);
	Foo.beRepaired(10);
	Foo.attack(Boo.getName());

	std::cout << "----------------------------" << std::endl;

	Foo.guardGate();
	Foo.guardGate();

	std::cout << "----------------------------" << std::endl;

}
