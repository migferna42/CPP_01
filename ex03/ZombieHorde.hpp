/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:14:51 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 20:38:54 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_H
# define ZOMBIE_HORDE_CLASS_H

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	int		_size;
	Zombie 	*_horde;
public:
	ZombieHorde(int size);
	~ZombieHorde();
	int getSize() const;
	std::string randomChump() const;
	void announce() const;
};

#endif
