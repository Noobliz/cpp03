#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copy);
        ~FragTrap(void);

        void highFivesGuys();

};