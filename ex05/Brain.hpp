/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:23:55 by migferna          #+#    #+#             */
/*   Updated: 2021/03/21 12:35:47 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <iostream>
# include <sstream>

class Brain
{
	int _iq;
public:
	Brain(void);
	Brain(const Brain&);
	~Brain(void);
	int getIq(void) const;
	void setIq(int iq);
	std::string identify(void) const;
};

#endif
