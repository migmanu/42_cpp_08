/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:13:14 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/24 14:25:11 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <vector>
#define SEPARATOR "-----------------------------------------------------"

int main(void)
{
	unsigned int size = 20;
	// Create and fill
	std::cout << SEPARATOR << std::endl;
	std::cout << "BASIC TESTS:" << std::endl;
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
	std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << s1.longestSpan() << std::endl;

	std::cout << std::endl << SEPARATOR << std::endl;
	std::cout << "ADD BY ITERATOR RANGE:" << std::endl;
	std::vector<int> vec1(20000, 0);
	Span s3(20000);
	try
	{
		srand(time(0));
		std::generate(vec1.begin(), vec1.end(), rand);
		s3.bulkAdd(vec1.begin(), vec1.end());
		// s3.printArr();
		std::cout << "Shortest span: " << s3.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// 42 TESTS
	std::cout << std::endl << SEPARATOR << std::endl;
	std::cout << "42 TESTS:" << std::endl;
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
