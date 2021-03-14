/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:28:01 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 20:49:54 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size):_size(size)
{
	std::string name;
	int it;

	this->_horde = new Zombie[getSize()];
	it = -1;
	while (++it < getSize())
	{
		name = randomChump();
		this->_horde[it].setName(name);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	if (getSize() > 0)
		delete[] this->_horde;
	std::cout << "La horda zombie ha sido destruida, han caido " << getSize() << " zombies." << std::endl;
}

int ZombieHorde::getSize(void) const
{
	return (this->_size);
}

void ZombieHorde::announce(void) const
{
	int it;

	it = -1;
	while (++it < getSize())
		this->_horde[it].announce();

}

std::string ZombieHorde::randomChump() const
{
	std::string 	alphanumeric;
	std::string 	name;
	unsigned int	len;
	unsigned int	it;

	alphanumeric = "abcdefghijklmnopqrstuvwxyz";
	len = sizeof(alphanumeric) - 1;
	it = 0;
	while (it < 10)
	{
		name += alphanumeric[std::rand() % len];
		it++;
	}
	return (name);
}
