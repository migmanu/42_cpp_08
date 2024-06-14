/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:36:06 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/14 18:28:21 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
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
	if (_count == _N - 1)
		throw std::length_error("addNumber: error:_arr is already full.");
	_arr[_count] = nbr;
	_count++;
}

int Span::shortestSpan(void)
{
	if (_count <= 1)
		throw std::invalid_argument("shortestSpan : error: _arr too short.");
	int *arr_cpy;
	std::copy(_arr, _arr + _N, arr_cpy);
	std::sort(arr_cpy, arr_cpy + _N - 1);
}
int Span::longestSpan(void)
{
	if (_count <= 1)
		throw std::invalid_argument("shortestSpan : error: _arr too short.");
	return std::max(_arr, _arr + _N - 1) - std::min(_arr, _arr + _N - 1);
}
