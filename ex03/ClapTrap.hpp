/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:33:53 by corellan          #+#    #+#             */
/*   Updated: 2023/06/06 13:37:58 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
public:

	ClapTrap(void);
	ClapTrap(ClapTrap const &rhs);
	ClapTrap(std::string name);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);

	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			setAttackDamage(unsigned int damage);
	unsigned int	getAttackDamage(void);
	
protected:

	int				_HitPoints;
	int				_EnergyPoints;
	int				_DeathCounter;
	int				_MaxHP;
	unsigned int	_AttackDamage;
	std::string		_Name;
};

#endif