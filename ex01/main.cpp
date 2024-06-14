/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:13:14 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/14 18:15:44 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	unsigned int size = 20000;
	// Create and fill
	Span s1(size);
	try
	{
		for (unsigned int i = 0; i < size; i++)
			s1.addNumber(i * -1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	s1.longestSpan();

	// 42 TESTS
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
