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
	Pony(std::string const name, std::string const color, int weight);
	~Pony();
	void hi() const;
	void run() const;
	void jump() const;
	void sound(std::string str) const;
};

#endif
