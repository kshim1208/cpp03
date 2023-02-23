
#include "ClapTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap Foo("Foo");
	ClapTrap Boo("Boo");

	Boo.announceAttribute();
	Foo.announceAttribute();
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

	std::cout << "----------------------------" << std::endl;

	Foo.attack(Boo.getName());

	std::cout << "----------------------------" << std::endl;
}
