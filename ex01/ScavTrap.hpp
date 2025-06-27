#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        ScavTrap();
    public:
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator=(const ScavTrap &copy);
        ~ScavTrap(void);

        void guardGate();
        void attack (const std::string &target);
};