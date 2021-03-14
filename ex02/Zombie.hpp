/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:57:43 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 20:51:26 by migferna         ###   ########.fr       */
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
	Zombie(std::string name, std::string type);
	~Zombie();
	std::string getType() const;
	std::string getName() const;
	void setName(std::string name);
	void announce() const;
};

#endif
