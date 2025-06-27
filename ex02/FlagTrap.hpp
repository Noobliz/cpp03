#pragma once

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
    private:
        FlagTrap();
    public:
        FlagTrap(const std::string &name);
        FlagTrap(const FlagTrap &copy);
        FlagTrap &operator=(const FlagTrap &copy);
        ~FlagTrap(void);

        void highFivesGuys();

};