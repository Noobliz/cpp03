#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("Bob");
    ClapTrap georges(bob);
    ClapTrap ernest("ernest");
    ClapTrap lol("lol");
    lol = ernest;

    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    bob.attack("nothing");
    //bob.attack("nothing");
    lol.attack("void");
    bob.takeDamage(5);
    bob.beRepaired(3);
    bob.beRepaired(10);
    bob.attack("nothing again");
}