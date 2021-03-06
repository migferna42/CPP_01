/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:58:20 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 13:58:22 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void):_type("empty")
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string ZombieEvent::getType() const
{
	return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, getType()));
}

Zombie ZombieEvent::randomChump() const
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
	return (Zombie(name, getType()));
}
