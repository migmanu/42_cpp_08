/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:13:14 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/17 20:16:15 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>
#include <vector>

int main(void)
{
	unsigned int size = 20;
	// Create and fill
	Span s1(size);
	try
	{
		for (unsigned int i = 0; i < size - 1; i++)
			s1.addNumber(i);
		s1.addNumber(0);
		Span s2(s1);
		s2.printArr();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << s1.shortestSpan() << std::endl;
	std::cout << s1.longestSpan() << std::endl;

	std::vector<int> vec1(11, 3);
	Span s3(10);
	try
	{
		s3.bulkAdd(vec1.begin(), vec1.end());
		s3.printArr();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

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
