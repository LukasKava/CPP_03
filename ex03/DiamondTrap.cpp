/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:56:57 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:22:48 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors	====================================
DiamondTrap::DiamondTrap(void)
{
	std::cout << YELL << "DiamondTrap" << BLANK << " default constructor has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	FragTrap::set_health();
	ScavTrap::set_energy();
	FragTrap::set_attack_damage();
 	std::cout << GREEN << "DiamondTrap" << BLANK << " param constructor has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << YELL << "DiamondTrap" << BLANK << " copy constructor has been called!" << std::endl;
}

//Destructor =========================================
DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED << "DiamondTrap" << BLANK << " destructor has been called!" << std::endl;
}

DiamondTrap& 	DiamondTrap::operator=(const DiamondTrap& other)
{
	_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << CYAN << "DiamondTrap" << BLANK << " copy assigment overload has been called!" << std::endl;
	return (*this);
}

//Functions	===========================================

void	DiamondTrap::whoAmI(void)
{
	std::cout << RED << "!!!-->	" << BLANK;
	std::cout << "My name is: " << GREEN << _name << BLANK ". My ClapTrap name is ";
	std::cout << GREEN << ClapTrap::_name << BLANK << std::endl;
}