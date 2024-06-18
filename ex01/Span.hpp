/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:29:06 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/17 20:09:20 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
class Span
{
  public:
	Span(unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span &operator=(const Span &rhs);

	void addNumber(int nbr);
	int shortestSpan(void);
	int longestSpan(void);
	void printArr(void);
	void bulkAdd(std::vector<int>::const_iterator start,
				 std::vector<int>::const_iterator end);

  private:
	unsigned int _N;
	unsigned int _count;
	int *_arr;
};
