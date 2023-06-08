/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:08:18 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 10:55:43 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("unknown_clap_name"), _name("unknown")
{
	std::cout << "Default constructor for DiamondTrap was called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_maxHP = 100;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap constructor was called by the user " << this->_name << "." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_maxHP = 100;
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
	std::cout << "DiamondTrap is " << this->_name << ". But also is " << this->ClapTrap::_name << std::endl;
	return ;
}
