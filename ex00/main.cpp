/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:48:09 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 10:33:17 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	carlos("Carlos");
	ClapTrap	ossi("Ossi");
	ClapTrap	diego("Diego");

	std::cout << std::endl;
	carlos.setAttackDamage(3);
	carlos.attack("Diego");
	diego.takeDamage(carlos.getAttackDamage());
	diego.setAttackDamage(9);
	diego.attack("Carlos");
	carlos.takeDamage(diego.getAttackDamage());
	carlos.beRepaired(10);
	diego.beRepaired(500);
	ossi.setAttackDamage(10);
	ossi.attack("Diego");
	diego.takeDamage(ossi.getAttackDamage());
	diego.beRepaired(10);
	carlos.setAttackDamage(3);
	carlos.attack("Diego");
	diego.takeDamage(carlos.getAttackDamage());
	ossi.setAttackDamage(10);
	ossi.attack("Diego");
	diego.takeDamage(ossi.getAttackDamage());
	carlos.setAttackDamage(3);
	carlos.attack("Diego");
	diego.takeDamage(carlos.getAttackDamage());
	ossi.setAttackDamage(10);
	ossi.attack("Diego");
	diego.takeDamage(ossi.getAttackDamage());
	carlos.setAttackDamage(3);
	carlos.attack("Diego");
	diego.takeDamage(carlos.getAttackDamage());
	ossi.setAttackDamage(10);
	ossi.attack("Diego");
	diego.takeDamage(ossi.getAttackDamage());
	std::cout << std::endl;
	
	return (0);
}