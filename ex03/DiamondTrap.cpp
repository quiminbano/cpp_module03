/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:08:18 by corellan          #+#    #+#             */
/*   Updated: 2023/06/07 09:58:13 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _Name("unknown")
{
	std::cout << "Default constructor for DiamondTrap was called." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	this->_MaxHP = 100;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _Name(name)
{
	std::cout << "DiamondTrap constructor was called by the user " << _Name << "." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	this->_MaxHP = 100;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
{
	std::cout << "Copy constructor for DiamondTrap was called." << std::endl;
	*this = rhs;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor was called. Bye." << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "Copy assigment operator called for DiamondTrap." << std::endl;
	*this = rhs;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap is " << this->_Name << ". But also is " << this->ClapTrap::_Name << std::endl;
	return ;
}
