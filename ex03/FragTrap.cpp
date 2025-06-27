#include "FragTrap.hpp"

FragTrap::FragTrap(){
        std::cout<<"FragTrap created from default constructor"<<std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name){
    std::cout<<"FragTrap from ClapTrap "<<this->_name
        <<" created with default constructor"<<std::endl;
    this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy){
    std::cout << "FragTrap from ClapTrap " << this->_name 
        << " copied." << std::endl;
}

// not possible like this if default constructor of claptrap is private
// FragTrap::FragTrap(const FragTrap &copy)
// {
//     *this = copy;
//     std::cout << this->_name << ": FragTrap Copy constructor called" << std::endl;
// }

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}
void FragTrap::highFivesGuys()
{
    if (this->_hitPoints <= 0)
        std::cout<<"no high five because "<<_name<<" is dead!"<<std::endl;
    else
        std::cout<<"a positive high-fives request on the standard output."<<std::endl;
}
