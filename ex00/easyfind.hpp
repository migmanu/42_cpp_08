/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu </var/spool/mail/migmanu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:42:17 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/10 20:06:56 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T> std::vector<int>::iterator easyfind(T &container, int target)
{
	typename T::value_type s;
	std::cout << s << std::endl;
	std::vector<int>::iterator r = std::find(container.begin(), container.end(), target);
	if (r == container.end())
		throw std::invalid_argument("easyfind : target not found in container");
	return r;
}
