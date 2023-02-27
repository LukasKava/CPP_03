/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:11 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/21 16:27:40 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors/Desctructor =====================================================

ClapTrap::ClapTrap(void) : _name("Bot"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Bot ship constructor has been called!" << std::endl; 
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points =  other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "Copy constructor has been called!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " destruction has been called!" << std::endl;
}

//Asigment operator overload ====================================================

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "Assigment operator overload!" << std::endl;
	return (*this);
}

// Functions	=================================================================

std::string	ClapTrap::get_name(void) const
{
	return (_name);
}

unsigned int	ClapTrap::get_attack_damage(void) const
{
	return (_attack_damage);
}

unsigned int	ClapTrap::get_energy(void) const
{
	return (_energy_points);
}

int	ClapTrap::get_health(void) const
{
	return (_hit_points);
}

// Setters	====================================================================
void	ClapTrap::set_name(const std::string& name)
{
	_name = name;
}

void	ClapTrap::set_attack_damage(unsigned int attack_damage)
{
	_attack_damage = attack_damage;
}

void	ClapTrap::set_energy(unsigned int energy)
{
	_energy_points = energy;
}

void	ClapTrap::set_health(unsigned int health)
{
	_hit_points = health;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points == 0)
		std::cout << YELL << "ClapTrap " << _name << " ran out of energy!" << BLANK << std::endl;
	{
		std::cout << RED << "ClapTrap " << _name << " attacks ";
		std::cout << target << ", causing " << _attack_damage;
		std::cout << " points of damage!"  << BLANK << std::endl;
		this->_energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
		std::cout << RED << "ClapTrap " << _name << " is already dead!" << BLANK << std:: endl;
	else if (amount >= (unsigned int)_hit_points)
	{
		std::cout << RED << "ClapTrap " << _name << " has taken critical amount of damage and is dead!" ;
		std::cout << BLANK << std::endl;
		this->_hit_points = 0;
	}
	else
	{
		std::cout << YELL << "ClapTrap " << _name << " takes damage of ";
		std::cout << amount << " causing healt drop to ";
		_hit_points -= amount;
		std::cout << _hit_points << BLANK << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		std::cout << GREEN << "ClapTrap " << _name << " uses repair package ";
		std::cout << ", causing his health increase by " << amount << BLANK << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << YELL << "ClapTrap " << _name << " cannot be repaired!" << BLANK << std::endl;
}
