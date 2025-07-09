
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(){
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30; 
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name")
{
    _name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout<<"DiamondTrap is created"<<std::endl;

}

DiamondTrap::~DiamondTrap(){
    std::cout<<"DiamondTrap is destroyed"<<std::endl;
 }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}
void DiamondTrap::whoAmI(){
    std::cout<<"My name is "<<this->_name<<std::endl;
    std::cout<<"My grandma is "<<ClapTrap::_name<<std::endl;
}

std::string DiamondTrap::getName(){
    return(_name);
}



int main()
{
    DiamondTrap a("blob");
    DiamondTrap b("hey");
    b = a;
    a.whoAmI();
    std::cout<<b.getName()<<std::endl;

}