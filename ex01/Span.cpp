/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:36:06 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/17 20:10:06 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

Span::Span(unsigned int N) : _N(N), _count(0)
{
	std::cout << "New Span with _N: " << _N << std::endl;
	_arr = new int[N];
	return;
}

Span::Span(const Span &src)
{
	*this = src;
	return;
}

Span::~Span()
{
	if (_arr)
		delete[] _arr;
	return;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_count = rhs._count;
		_arr = new int[_N];
		for (unsigned int i = 0; i < _N; i++)
			_arr[i] = rhs._arr[i];
	}
	return *this;
}

void Span::addNumber(int nbr)
{
	if (_count == _N)
		throw std::length_error("addNumber: error:_arr is already full.");
	_arr[_count] = nbr;
	_count++;
}

int Span::shortestSpan(void)
{
	if (_count <= 1)
		throw std::invalid_argument("shortestSpan : error: _arr too short.");
	int r = INT_MAX;
	int *arr_cpy = new int[_N];
	std::copy(_arr, _arr + _count, arr_cpy);
	std::sort(arr_cpy, arr_cpy + _count);
	for (unsigned int i = 0; i < _N - 1; i++)
	{
		int diff = std::abs(arr_cpy[i + 1] - arr_cpy[i]);
		r = diff < r ? diff : r;
	}
	delete[] arr_cpy;
	return r;
}

int Span::longestSpan(void)

{
	if (_count <= 1)
		throw std::invalid_argument("longestSpan : error: _arr too short.");
	return *std::max_element(_arr, _arr + _count) -
		   *std::min_element(_arr, _arr + _count);
}

void Span::printArr(void)
{
	unsigned int i = 0;
	std::cout << "_arr: [";
	for (; i < _count - 1; i++)
	{
		std::cout << _arr[i] << ", ";
	}
	std::cout << _arr[i] << "]" << std::endl;
}

void Span::bulkAdd(std::vector<int>::const_iterator start,
				   std::vector<int>::const_iterator end)
{
	while (start != end)
	{
		addNumber(*start);
		start++;
	}
}
