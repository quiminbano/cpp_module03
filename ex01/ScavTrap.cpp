/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:01:00 by corellan          #+#    #+#             */
/*   Updated: 2023/06/05 18:32:55 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor for ScavTrap was called." << std::endl;
	return ;
}
ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "Copy constructor for ScavTrap was called." << std::endl;
	*this = rhs;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor was called. Bye." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Copy assigment operator called for ScavTrap." << std::endl;
	*this = rhs;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints -= 1;
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " tries to attack " << target << ", but it doesn't have stamina left. Sorry dude!!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap now is in gate keeper mode" << std::endl;
	return ;
}
