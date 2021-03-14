/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:56:44 by migferna          #+#    #+#             */
/*   Updated: 2021/03/14 22:02:09 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *pstr;
	std::string &rstr = str;

	str = "HI THIS IS BRAIN";
	pstr = &str;

	std::cout << "El valor de la cadena usando una variable de tipo puntero es: " << *pstr << std::endl;
	std::cout << "El valor de la cadena usando una variable de tipo referencia es: " << rstr << std::endl;

	return (0);
}
