#include "Zombie.hpp"

Zombie::Zombie():_name("noname"), _type("empty")
{
	announce();
}

Zombie::Zombie(std::string name, std::string type):_name(name), _type(type)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Ha muerto " << this->_name << std::endl;
}

std::string Zombie::getType() const
{
	return (this->_type);
}

std::string Zombie::getName() const
{
	return (this->_name);
}

void Zombie::announce() const
{
	std::cout << "<" << getName() << " (" << getType() << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
}
