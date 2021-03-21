/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:56:27 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 14:44:28 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type):_type(type)
{
}

Weapon::~Weapon(void)
{
}

std::string const &Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
