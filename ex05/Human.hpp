/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:33:34 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 11:35:47 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include <iostream>
# include "Brain.hpp"

class Human
{
	const Brain _brain;
public:
	Human(void);
	~Human(void);
	std::string identify(void) const;
	Brain const  &getBrain(void) const;	
};

#endif
