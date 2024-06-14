/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu </var/spool/mail/migmanu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:42:17 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/14 11:47:04 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>

template <typename T>
void easyfind(T &container, int target)
{
	if (std::find(container.begin(), container.end(), target) != container.end())
		std::cout << "Target '" << target << "' found in container" << std::endl;
	else
		std::cout << "Target '" << target << "' NOT found in container" << std::endl;
}
