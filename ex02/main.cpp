
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main()
{
	FragTrap Foo("Foo");
	ClapTrap Boo("Boo");

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
	Foo.highFivesGuys();

	std::cout << "----------------------------" << std::endl;
}
