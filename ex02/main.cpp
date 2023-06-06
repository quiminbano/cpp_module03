/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/06 16:28:20 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ossi("Ossi");
	ScavTrap	robot("Roboto");
	FragTrap	savior("OurSaviorRobot");

	std::cout << std::endl;
	ossi.setAttackDamage(20);
	ossi.attack("Roboto");
	robot.takeDamage(20);
	robot.beRepaired(10);
	savior.attack("Roboto");
	robot.takeDamage(30);
	savior.highFiveGuys();
	ossi.attack("Roboto");
	robot.takeDamage(20);
	savior.attack("Roboto");
	robot.takeDamage(30);
	robot.guardGate();
	ossi.attack("Roboto");
	robot.guardGate();
	std::cout << std::endl;
	return (0);
}