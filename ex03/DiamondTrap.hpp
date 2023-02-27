/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:57:00 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:26:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include	"ClapTrap.hpp"
#include	"FragTrap.hpp"
#include	"ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		DiamondTrap(void);
		std::string	_name;
	public:
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap(void);
		
		DiamondTrap&	operator=(const DiamondTrap& other);
		
		using	ScavTrap::attack;
		void 	whoAmI();
};

#endif