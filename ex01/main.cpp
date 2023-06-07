/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/07 17:09:44 by corellan         ###   ########.fr       */
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
	robot.takeDamage(carlos.getAttackDamage());
	robot.attack("Carlos");
	carlos.takeDamage(robot.getAttackDamage());
	carlos.beRepaired(5);
	robot.beRepaired(10);
	ossi.setAttackDamage(20);
	ossi.attack("Roboto");
	robot.takeDamage(ossi.getAttackDamage());
	robot.guardGate();
	ossi.attack("Roboto");
	robot.guardGate();
	std::cout << std::endl;
	return (0);
}