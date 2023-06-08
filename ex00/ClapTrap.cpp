/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:48:46 by corellan          #+#    #+#             */
/*   Updated: 2023/06/08 10:33:04 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("unknown"), _deathCounter(0)
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

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name), _deathCounter(0)
{
	std::cout << "ClapTrap constructor was called by the user " << this->_name << "." << std::endl;
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
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " tries to attack " << target << ", but it doesn't have stamina left. Sorry dude!!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = static_cast<int>(amount);
	if (this->_hitPoints == 0)
	{
		if (this->_deathCounter > 0 && this->_deathCounter < 3)
			std::cout << "ClapTrap " << this->_name << " is already dead. it is not necessary to continue hitting " << this->_name << "!!" << std::endl;
		else if (this->_deathCounter > 2 && this->_deathCounter < 5)
			std::cout << "ClapTrap " << this->_name << " is ALREADY dead. Stop dude please!!" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " IS ALREADY DEAD. JESUS CHRIST. DO YOU HAVE RESPECT FOR DEAD BODDIES? STOP HITTING THE F$#@ING CORPSE NOW" << std::endl;
		(this->_deathCounter)++;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " received " << amount << " points of damage!" << std::endl;
	if ((this->_hitPoints - damage) <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is dead. Oh no.!!" << std::endl;
		(this->_deathCounter)++;
	}
	else
		this->_hitPoints -= damage;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead. It can't be healed!!" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		if ((this->_hitPoints + amount) > 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " tries to heal himself " << amount;
		std::cout << " ammount of hit points. Now, the hit points of " << this->_name;
		std::cout << " are " << this->_hitPoints << " hit points." << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->_name << " tries to heal himself. But, it doesn't have enough stamina to do it." << std::endl;
	return ;
}

void	ClapTrap::setAttackDamage(unsigned int damage)
{
	this->_attackDamage = damage;
	return ;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}
