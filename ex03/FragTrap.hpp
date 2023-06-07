/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:46:24 by corellan          #+#    #+#             */
/*   Updated: 2023/06/07 16:53:06 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
public:

	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	
	void	highFiveGuys(void);
};

#endif