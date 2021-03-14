#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <iostream>

class Zombie
{
	std::string _name;
	std::string _type;
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	std::string getType() const;
	std::string getName() const;
	void announce() const;
};

#endif
