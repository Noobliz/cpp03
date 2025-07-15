#include "Animal.hpp"

Animal::Animal():type("living creature"){
    std::cout<<"Animal default constructor called"<<std::endl;

}

Animal::Animal(const std::string &type){
    this->type = type;
    std::cout<<"Animal constructor type called"<<std::endl;
}

Animal::Animal(const Animal &other){
    this->type = other.type;
    std::cout<<"Animal copy constructor called"<<std::endl;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout<<"Animal assignment operator called"<<std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout<<"destructor called"<<std::endl;
}