/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:46:35 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 13:39:34 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << GREEN << "ScavTrap " << BLANK << " Default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor has been called!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor for ScavTrap has been called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->_attack_damage = other._attack_damage;
	this->_energy_points =  other._energy_points;
	this->_hit_points = other._hit_points;
	this->_name = other._name;
	std::cout << "ScavTrap copy assigment overload has been called!" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energy_points == 0)
		std::cout << YELL << "ScavTrap " << _name << " ran out of energy!" << BLANK << std::endl;
	{
		std::cout << RED << "ScavTrap " << _name << " attacks ";
		std::cout << target << ", causing " << _attack_damage;
		std::cout << " points of damage!" << BLANK << std::endl;
		this->_energy_points--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << YELL << "ScavTrap is now in Gate keeper mode!" << std::endl;
}