/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:00:49 by corellan          #+#    #+#             */
/*   Updated: 2023/06/05 21:22:22 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif