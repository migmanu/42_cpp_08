/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:39:13 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/20 16:05:54 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <stack>
#include <string>

#define SEPARATOR "-----------------------------------------------------"

template <typename T> void testInheretedMethods(MutantStack<T> stk)
{
	std::cout << std::endl << SEPARATOR;
	std::cout << std::endl << "Testing stack..." << std::endl;

	MutantStack<T> cpy = stk;
	MutantStack<T> modified = stk;
	modified.pop();

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

template <typename T> void testIterators(MutantStack<T> stk)
{
	std::cout << std::endl << SEPARATOR;
	std::cout << std::endl << "Testing iterators..." << std::endl;

	// TEST BEING AND END
	std::cout << "Testing begin() and end()" << std::endl;
	typename MutantStack<T>::iterator begin = stk.begin();
	typename MutantStack<T>::iterator end = stk.end();
	std::cout << "Begin: " << *begin << " end: " << *end << std::endl;

	// ITERATION AND DEREFERENCE TESTS
	std::cout << "Iterating and dereferencing members:" << std::endl;
	std::cout << "Members of stack: ";
	for (typename MutantStack<T>::iterator it = stk.begin(); it != stk.end(); it++)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	std::cout << "Members of stack in reverse order: ";
	for (typename MutantStack<T>::iterator it = --stk.end(); it != stk.begin(); it--)
	{
		std::cout << " " << *it;
	}
	std::cout << " " << *stk.begin();
	std::cout << std::endl;
}

void ft_tests(void)
{
	std::cout << std::endl << SEPARATOR;
	std::cout << std::endl << "42 TESTS..." << std::endl;
	{
		// WITH MUTANTSTACK
		std::cout << std::endl << "Testing with MutantStack..." << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		std::cout << "Elements: " << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		// WITH STD::LIST
		std::cout << std::endl << "Testing with std::list..." << std::endl;
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << "Front: " << mstack.front() << std::endl;
		mstack.pop_front();
		std::cout << "Size: " << mstack.size() << std::endl;
		std::cout << "Elements: " << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
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

	testInheretedMethods(int_stack);
	testIterators(char_stack);
	ft_tests();

	return EXIT_SUCCESS;
}
