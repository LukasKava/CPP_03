/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:46:32 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:16:36 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: /*virtual*/virtual public ClapTrap
{
protected:
	ScavTrap(void);	
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap(void);

	ScavTrap& operator=(const ScavTrap& other);
	
	void	attack(const std::string& target);
	void	guardGate(void);

	void		set_attack_damage(void);
	void		set_energy(void);
	void		set_health(void);
};