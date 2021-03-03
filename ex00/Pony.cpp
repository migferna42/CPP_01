#include "Pony.hpp"

Pony::Pony():
	name("noname"), color("transparent"), weight(0), age(0)
{
	std::cout << "Ha nacido " << this->name << std::endl;
}

Pony::Pony(std::string const _name, std::string const _color, int _weight, int _age):
	name(_name), color(_color), weight(_weight), age(_age)
{
}

void Pony::hi()
{
	std::cout << "Soy " << this->name;
	std::cout << ", tengo " << this->age << " años";
	std::cout << " y peso " << this->weight << " kilos" << std::endl;
}

void Pony::sound(std::string str)
{
	std::cout << str << std::endl;
}

Pony::~Pony()
{
	std::cout << "Ha muerto " << this->name << std::endl;
}
