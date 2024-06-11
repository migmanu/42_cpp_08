/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu </var/spool/mail/migmanu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:42:19 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/10 19:59:50 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> integers(9, 4);

	integers.at(1) = 2;
	try {
		std::vector<int>::iterator r =  easyfind(integers, 2);
		int f = *r;
		std::cout << "r:" << *r << std::endl;
		std::cout << "f:" << f << std::endl;
	} catch (std::exception &e) {
	
	}
	return 0;
}
