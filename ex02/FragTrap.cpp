/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:50:22 by corellan          #+#    #+#             */
/*   Updated: 2023/06/06 16:16:44 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor for FragTrap was called." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_MaxHP = 100;
	return ;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	std::cout << "Copy constructor for FragTrap was called." << std::endl;
	*this = rhs;
	return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor was called by the user " << _Name << "." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_MaxHP = 100;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor was called. Bye." << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Copy assigment operator called for FragTrap." << std::endl;
	*this = rhs;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " is giving you a high five. HIGH FIVE!!" << std::endl;
	return ;
}