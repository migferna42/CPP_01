#include "Brain.hpp"

Brain::Brain(void):_iq(0)
{
}

Brain::~Brain(void)
{
}

int Brain::getIq() const
{
	return (this->_iq);
}

void Brain::setIq(int iq)
{
	this->_iq = iq;
}

std::string Brain::identify() const
{
	std::stringstream ss;
	
	ss << std::hex << this;
	return (ss.str());
	//std::cout << "0x" << output << std::endl;

}
