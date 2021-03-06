/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:58:29 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 13:58:31 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H

# include "Zombie.hpp"

class ZombieEvent
{
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	std::string getType() const;
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name) const;
	Zombie randomChump() const;
};

#endif
