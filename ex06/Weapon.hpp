/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:39:49 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 14:49:17 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>

class Weapon
{
	std::string _type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType(void) const;
	void setType(const std::string type);
};

#endif
