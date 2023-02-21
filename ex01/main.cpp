
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Boo("Boo");
	ScavTrap Foo("Foo");

	Foo.attack(Boo.getName());
	Boo.takeDamage(Foo.getAttackDamage());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());
	Foo.attack(Boo.getName());
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(5);
	Foo.beRepaired(10);
	Foo.beRepaired(10);
	Foo.attack(Boo.getName());
}
