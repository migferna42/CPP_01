/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:02:37 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 17:07:45 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H

# include "Weapon.hpp"

class HumanB
{
	Weapon* _weapon;
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB(void);
	std::string getName() const;
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif
