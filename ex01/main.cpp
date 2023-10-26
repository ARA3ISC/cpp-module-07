/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:07:51 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/25 22:07:51 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	// ? char test
	char arr[5] = {'a', 'b', 'c', 'd', 'e'};

	iter<char*>(arr, 5, func);

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;

	// ? double test
	// double arr[5] = {1.5, 2.6, 3.7, 4.8, 5.9};

	// iter<double*>(arr, 5, func);

	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << arr[i] << "  ";
	// }
	// std::cout << std::endl;

	// ? int test
	// int arr[5] = {1, 2, 3, 4, 5};

	// iter<int*>(arr, 5, func);

	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << arr[i] << "  ";
	// }
	// std::cout << std::endl;
}
