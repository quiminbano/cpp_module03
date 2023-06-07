/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/07 16:59:08 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ossi("Ossi");
	ScavTrap	robot("Roboto");
	FragTrap	savior("OurSaviorRobot");
	DiamondTrap	monster("Monster");

	std::cout << std::endl;
	monster.attack("Ossi");
	ossi.takeDamage(monster.getAttackDamage());
	robot.attack("Monster");
	monster.takeDamage(robot.getAttackDamage());
	savior.attack("Monster");
	monster.takeDamage(savior.getAttackDamage());
	monster.guardGate();
	robot.guardGate();
	monster.highFiveGuys();
	savior.highFiveGuys();
	monster.whoAmI();
	
	std::cout << std::endl;
	return (0);
}