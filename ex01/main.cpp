/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/05 21:59:10 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	carlos("Carlos");
	ClapTrap	ossi("Ossi");
	ClapTrap	diego("Diego");
	ScavTrap	manuel;

	std::cout << std::endl;
	manuel.attack("Carlos");
	carlos.attack("unknown");
	manuel.beRepaired(10);
	std::cout << std::endl;
	return (0);
}