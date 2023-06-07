/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/07 17:11:30 by corellan         ###   ########.fr       */
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
	robot.takeDamage(ossi.getAttackDamage());
	robot.beRepaired(10);
	savior.attack("Roboto");
	robot.takeDamage(savior.getAttackDamage());
	savior.highFiveGuys();
	ossi.attack("Roboto");
	robot.takeDamage(ossi.getAttackDamage());
	savior.attack("Roboto");
	robot.takeDamage(savior.getAttackDamage());
	robot.guardGate();
	ossi.attack("Roboto");
	robot.guardGate();
	std::cout << std::endl;
	return (0);
}