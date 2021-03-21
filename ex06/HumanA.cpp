/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:34:36 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 15:09:07 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

std::string HumanA::getName() const
{
	return (this->_name);
}

void HumanA::attack() const
{
	std::cout << getName() << " attacks with his " << _weapon.getType() << std::endl;
}
