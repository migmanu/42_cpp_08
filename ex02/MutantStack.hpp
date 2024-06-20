/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:47:57 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/20 12:22:25 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iterator>
#include <stack>

template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T>
{
  public:
	MutantStack()
	{
	}
	~MutantStack()
	{
	}
	MutantStack(const MutantStack &stack) : std::stack<T>() 
	{
		*this = stack;
	}
	typedef typename container::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};
