#include "Pony.hpp"

Pony::Pony():
	name("noname"), color("transparent"), weight(0), age(0)
{
	std::cout << "Ha nacido " << this->name << std::endl;
}

Pony::Pony(std::string const _name, std::string const _color, int _weight):
	name(_name), color(_color), weight(_weight), age(0)
{
	std::cout << "Ha nacido " << this->name << std::endl;
}

void Pony::hi() const
{
	std::cout << "Soy " << this->name;
	std::cout << ", tengo " << this->age << " años";
	std::cout << " y peso " << this->weight << " kilos" << std::endl;
}

void Pony::sound(std::string str) const
{
	std::cout << str << std::endl;
}

void Pony::run() const
{
	std::cout << "Preparados...Listos...YA!!!" << std::endl;
}

void Pony::jump() const
{
	std::cout << "UP!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Ha muerto " << this->name << std::endl;
}
