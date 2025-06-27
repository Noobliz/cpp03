#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const std::string &name): ClapTrap(name){
    std::cout<<"FlagTrap from ClapTrap "<<this->_name
        <<" created with default constructor"<<std::endl;
    this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FlagTrap::FlagTrap(const FlagTrap &copy):ClapTrap(copy){
    std::cout << "FlagTrap from ClapTrap " << this->_name 
        << " copied." << std::endl;
}

// not possible like this if default constructor of claptrap is private
// FlagTrap::FlagTrap(const FlagTrap &copy)
// {
//     *this = copy;
//     std::cout << this->_name << ": FlagTrap Copy constructor called" << std::endl;
// }

FlagTrap	&FlagTrap::operator=(FlagTrap const &copy)
{
	std::cout << "Assignment operator for FlagTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap " << this->_name << " destroyed." << std::endl;
}
void FlagTrap::highFivesGuys()
{
    if (this->_hitPoints <= 0)
        std::cout<<"no high five because "<<_name<<" is dead!"<<std::endl;
    else
        std::cout<<"a positive high-fives request on the standard output."<<std::endl;
}