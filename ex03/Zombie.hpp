/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:57:43 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 21:53:11 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <iostream>

class Zombie
{
	std::string _name;
	std::string _type;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	std::string getType(void) const;
	std::string getName(void) const;
	void setName(std::string name);
	void announce(void) const;
};

#endif
