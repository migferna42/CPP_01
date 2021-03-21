#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify() const
{
	return (this->_brain.identify());
}

Brain const &Human::getBrain() const
{
	return (this->_brain);
}
