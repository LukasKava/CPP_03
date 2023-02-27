/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:40:19 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:18:55 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << RED << "FragTrap " << BLANK << "Default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << CYAN << "FragTrap" << BLANK " param constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << CYAN << "Fragtrap" << BLANK " copy constructor!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << CYAN << "FragTrap"	<< BLANK << " destructor called!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << CYAN << "FragTrap" << BLANK << " high fives everyone!" << std::endl; 
}

//	Functions	==========================================

void	FragTrap::set_attack_damage(void)
{
	_attack_damage = 30;
}

void	FragTrap::set_energy(void)
{
	_energy_points = 100;
}

void	FragTrap::set_health(void)
{
	_hit_points = 100;
}