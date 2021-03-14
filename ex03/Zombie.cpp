/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:58:05 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 21:52:52 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void):_name("noname"),_type("empty")
{
}

Zombie::Zombie(std::string name):_name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << "Ha muerto " << getName() << std::endl;
}

std::string Zombie::getType(void) const
{
	return (this->_type);
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void) const
{
	std::cout << "<" << getName() << " (" << getType() << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
}
