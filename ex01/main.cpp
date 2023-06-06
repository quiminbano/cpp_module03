/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/06 13:55:45 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	carlos("Carlos");
	ClapTrap	ossi("Ossi");
	ScavTrap	robot("Roboto");

	std::cout << std::endl;
	carlos.setAttackDamage(20);
	carlos.attack("Roboto");
	robot.takeDamage(20);
	robot.attack("Carlos");
	carlos.takeDamage(20);
	carlos.beRepaired(5);
	robot.beRepaired(10);
	ossi.setAttackDamage(20);
	ossi.attack("Roboto");
	robot.takeDamage(20);
	robot.guardGate();
	ossi.attack("Roboto");
	robot.guardGate();
	std::cout << std::endl;
	return (0);
}