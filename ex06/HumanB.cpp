/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:03:08 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 17:13:07 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{
}

HumanB::~HumanB(void)
{
}

std::string HumanB::getName() const
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const
{
	std::cout << getName() << " attacks with his " << _weapon->getType() << std::endl;
}
