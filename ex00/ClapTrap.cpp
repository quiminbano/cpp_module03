/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:48:46 by corellan          #+#    #+#             */
/*   Updated: 2023/06/04 18:04:10 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _Name("unknown"), _DeathCounter(0)
{
	std::cout << "Default constructor for ClapTrap was called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "Copy constructor for ClapTrap was called." << std::endl;
	*this = rhs;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _Name(name), _DeathCounter(0)
{
	std::cout << "ClapTrap constructor was called by the user " << _Name << "." << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor was called. Bye." << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assigment operator called." << std::endl;
	*this = rhs;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints -= 1;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " tries to attack " << target << ", but it doesn't have stamina left. Sorry dude!!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = static_cast<int>(amount);
	if (this->_HitPoints == 0)
	{
		if (this->_DeathCounter > 0 && this->_DeathCounter < 3)
			std::cout << "ClapTrap " << this->_Name << " is already dead. it is not necessary to continue hitting " << _Name << "!!" << std::endl;
		else if (this->_DeathCounter > 2 && this->_DeathCounter < 5)
			std::cout << "ClapTrap " << this->_Name << " is ALREADY dead. Stop dude please!!" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " IS ALREADY DEAD. JESUS CHRIST. DO YOU HAVE RESPECT FOR DEAD BODDIES? STOP HITTING THE F$#@ING CORPSE NOW" << std::endl;
		(this->_DeathCounter)++;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " received " << amount << " points of damage!" << std::endl;
	if ((this->_HitPoints - damage) <= 0)
	{
		this->_HitPoints = 0;
		std::cout << "ClapTrap " << this->_Name << " is dead. Oh no.!!" << std::endl;
		(this->_DeathCounter)++;
	}
	else
		this->_HitPoints -= damage;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead. It can't be healed!!" << std::endl;
		return ;
	}
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints -= 1;
		if ((this->_HitPoints + amount) > 10)
			this->_HitPoints = 10;
		else
			this->_HitPoints += amount;
		std::cout << "ClapTrap " << this->_Name << " tries to heal himself " << amount;
		std::cout << " ammount of hit points. Now, the hit points of " << this->_Name;
		std::cout << " are " << this->_HitPoints << " hit points." << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->_Name << " tries to heal himself. But, it doesn't have enough stamina to do it." << std::endl;
	return ;
}

void	ClapTrap::setAttackDamage(unsigned int damage)
{
	this->_AttackDamage = damage;
	return ;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->_AttackDamage);
}
