#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <iostream>
#include <string>

class Pony
{
	std::string const 	name;
	std::string const 	color;
	int					weight;
	int					age;
public:
	Pony();
	Pony(std::string const name, std::string const color, int weight, int age);
	~Pony();
	void hi();
	void sound(std::string str);
};

#endif
