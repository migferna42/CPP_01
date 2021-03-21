/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:57:19 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 10:48:37 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	std::srand(time(NULL));
	ZombieEvent	ze;
	ze.setZombieType("Basic");
	Zombie z1 = ze.randomChump();
	z1.announce();
	Zombie z2 = ze.randomChump();
	z2.announce();
	Zombie z3 = ze.randomChump();
	z3.announce();
	ze.setZombieType("Premium");
	Zombie *pz1 = ze.newZombie("Puntero Zombi 1");
	pz1->announce();
	Zombie *pz2 = ze.newZombie("Puntero Zombi 2");
	pz2->announce();
	Zombie *pz3 = ze.newZombie("Puntero Zombi 3");
	pz3->announce();
	delete (pz1);
	delete (pz2);
	delete (pz3);
	return (0);
}
