
# pragma once

#include <iostream>

class   ClapTrap
{
    protected: //so babies can access
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();

        void    attack (const std::string &target);
        void    takeDamage (unsigned int amount);
        void    beRepaired (unsigned int amount);
};