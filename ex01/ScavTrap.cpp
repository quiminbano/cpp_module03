/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:01:00 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 10:38:52 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor for ScavTrap was called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHP = 100;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "Copy constructor for ScavTrap was called." << std::endl;
	*this = rhs;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor was called by the user " << this->_name << "." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHP = 100;
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
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " tries to attack " << target << ", but it doesn't have stamina left. Sorry dude!!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " now is in gate keeper mode. So, it doesn't take damage" << std::endl;
	return ;
}
