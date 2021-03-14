#include "ZombieEvent.hpp"

int main(void)
{
	std::srand(time(NULL));
	ZombieEvent	ze;
	Zombie *pz = ze.newZombie("Puntero zombi");
	ze.setZombieType("Basic");
	Zombie z1 = ze.randomChump();
	Zombie z2 = ze.randomChump();
	Zombie z3 = ze.randomChump();
	ze.setZombieType("Premium");
	Zombie pz1 = ze.randomChump();
	Zombie pz2 = ze.randomChump();
	delete(pz);
	return (0);
}
