/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:47:57 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/18 23:25:21 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>,
					public std::iterator<std::random_access_iterator_tag, T>
{
  public:
	std::iterator<std::random_access_iterator_tag, T> begin(void)
	{
		return this->c.begin();
	};
	std::iterator<std::random_access_iterator_tag, T> end(void)
	{
		return this->c.end();
	};

		std::iterator<std::random_access_iterator_tag, T> operator++(int)
	{std::iterator<std::random_access_iterator_tag, T> tmp(p); operator++();
	return tmp;};

	int * operator*() {return &this->p;};

  private:
	T *p;
};
