/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu </var/spool/mail/migmanu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:42:19 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/14 11:44:49 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int target = -5;

	std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
	std::deque<int> dq(arr, arr + sizeof(arr) / sizeof(int));
	std::list<int> lst(arr, arr + sizeof(arr) / sizeof(int));

	std::cout << "Test vector" << std::endl;
	easyfind(vec, target);


	std::cout << "Test deque" << std::endl;
	easyfind(dq, target);

	std::cout << "Test list" << std::endl;
	easyfind(lst, target);
	return 0;
}
