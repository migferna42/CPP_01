#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H

# include "Zombie.hpp"

class ZombieEvent
{
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	std::string getType() const;
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name) const;
	Zombie randomChump() const;
};

#endif
