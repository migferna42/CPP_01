/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:07:53 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 15:22:29 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

# include "Weapon.hpp"

class HumanA
{
	std::string _name;
	Weapon& _weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	std::string getName(void) const;
	void attack(void) const;
};

#endif
