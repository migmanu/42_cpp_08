/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:39:13 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/20 12:29:20 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>

#define SEPARATOR "-----------------------------------------------------"

template <typename T> void testInhereted(MutantStack<T> stk)
{
	MutantStack<T> cpy = stk;
	MutantStack<T> modified = stk;
	modified.pop();

	std::cout << std::endl << SEPARATOR;
	std::cout << std::endl << "Testing stack..." << std::endl;

	// MEMBER FUNCTIONS TESTS
	std::cout << std::left << std::setw(20) << "Test member functions" << std::endl;
	std::cout << std::left << std::setw(20) << "stk.empty(): " << stk.empty()
			  << std::endl;
	std::cout << std::left << std::setw(20) << "stk.size(): " << stk.size()
			  << std::endl;
	std::cout << std::left << std::setw(20) << "stk.top(): " << stk.top()
			  << std::endl;
	std::cout << std::left << std::setw(20) << "modified.top(): " << modified.top()
			  << std::endl;

	// NON-MEMBER FUNCTIONS TESTS
	std::cout << std::left << std::setw(20)
			  << "Test overloaded operators (non-member functions):" << std::endl;
	std::cout << std::left << std::setw(20)
			  << "stk == cpy: " << (stk == cpy ? "EQUAL" : "NOT EQUAL") << std::endl;
	std::cout << std::left << std::setw(20)
			  << "stk == modified: " << (stk == modified ? "EQUAL" : "NOT EQUAL")
			  << std::endl;
	std::cout << std::left << std::setw(20)
			  << "stk != cpy: " << (stk != cpy ? "DIFFERENT" : "NOT DIFFERENT")
			  << std::endl;
	std::cout << std::left << std::setw(20)
			  << "stk < cpy: " << (stk < cpy ? "SMALLER" : "NOT SMALLER")
			  << std::endl;
	std::cout << std::left << std::setw(20)
			  << "cpy < stk: " << (cpy < stk ? "SMALLER" : "NOT SMALLER")
			  << std::endl;
	std::cout << std::left << std::setw(20)
			  << "stk <= cpy: " << (stk <= cpy ? "SMALLER" : "NOT SMALLER")
			  << std::endl;

	std::cout << SEPARATOR << std::endl << std::endl;
}

int main(void)
{
	// CREATE STACKS
	std::cout << "Creating stacks..." << std::endl;
	MutantStack<int> int_stack;
	MutantStack<char> char_stack;
	MutantStack<std::string> str_stack;

	// PUSH TO STACKS
	std::cout << "Pushing to stacks..." << std::endl;
	int_stack.push(4);
	int_stack.push(11);
	int_stack.push(7);
	int_stack.push(10);
	int_stack.push(8);
	int_stack.push(14);

	char_stack.push('a');
	char_stack.push('b');
	char_stack.push('c');

	str_stack.push("Hola");
	str_stack.push("mundo");
	str_stack.push("!");

	testInhereted(int_stack);

	// TEST ITERATORS
	std::cout << "Testing iterators" << std::endl;
	MutantStack<int>::iterator begin = int_stack.begin();
	MutantStack<int>::iterator end = int_stack.end();
	std::cout << "Begin: " << *begin << " end: " << *end << std::endl;
	std::cout << "Iterating and printing members:" << std::endl;
	for (MutantStack<int>::iterator it = int_stack.begin(); it != end; it++)
	{
		std::cout << *it++;
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
