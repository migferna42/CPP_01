/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:56:44 by migferna          #+#    #+#             */
/*   Updated: 2021/03/20 22:09:40 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;

	std::cout << "El valor de la cadena usando una variable de tipo puntero es: " << *pstr << std::endl;
	std::cout << "El valor de la cadena usando una variable de tipo referencia es: " << rstr << std::endl;

	return (0);
}
