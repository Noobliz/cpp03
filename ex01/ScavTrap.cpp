#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name){
    std::cout<<"ScavTrap from ClapTrap "<<this->_name
        <<" created with default constructor"<<std::endl;
    this->_attackDamage = 20;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy){
    std::cout << "ScavTrap from ClapTrap " << this->_name 
        << " copied." << std::endl;
}

// not possible like this if default constructor of claptrap is private
// ScavTrap::ScavTrap(const ScavTrap &copy)
// {
//     *this = copy;
//     std::cout << this->_name << ": ScavTrap Copy constructor called" << std::endl;
// }

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoints <= 0)
		std::cout << "No gate-keeper mode because: " << this->_name << " is dead" << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " mode: Gate keeper" << std::endl;
}

void    ScavTrap::attack (const std::string &target){
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout<<"ScavTrap "<<_name<<" can't attack"<<std::endl;
        return ;
    }
    _energyPoints--;
    std::cout<<"ScavTrap "<<_name<<" attacks "<< target
    <<" dealing "<<_attackDamage<<" damage!"<<std::endl;
}

int main()
{
    //ClapTrap jean("jean");
    ScavTrap bob("bob");
    ScavTrap lol("lol");
    ScavTrap Ernest(lol);
    ScavTrap same("same");
    same = bob;
    same.attack("something");
    same.takeDamage(100);
    same.guardGate();
}