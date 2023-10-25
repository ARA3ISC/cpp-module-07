/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:49:21 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/25 17:49:21 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 5;
	int b = 7;

	std::cout << "a before : " << a << std::endl;
	std::cout << "b before : " << b << std::endl;

	::swap<int>(a, b);

	std::cout << "a before : " << a << std::endl;
	std::cout << "b before : " << b << std::endl;
}
