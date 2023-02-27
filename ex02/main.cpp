/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:25:03 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:37:53 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <limits.h>

void	ship_is_ready(ClapTrap& ship)
{
	std::cout << GREEN << "Ship is ready ----------" << BLANK << std::endl;
	std::cout << "Statistics:" << std::endl;
	std::cout << "NAME: " << ship.get_name() << std::endl;
	std::cout << "HEALTH: " << ship.get_health() << std::endl;
	std::cout << "ENERGY: " << ship.get_energy() << std::endl;
	std::cout << "ATTACK POWER: " << ship.get_attack_damage() << std::endl;
}

int main(void)
{
	ScavTrap	robot("robot");
	std::cout << GREEN << "----------------------" << BLANK << std::endl;

	ClapTrap	baseRobot("BIG");
	baseRobot.attack("robot");
	robot.attack("BIG");
	baseRobot.takeDamage(20);
	robot.guardGate();

	ClapTrap a = robot;
	std::cout << GREEN << "----------------------" << BLANK << std::endl;

	ship_is_ready(robot);
	ship_is_ready(baseRobot);
	ship_is_ready(a);

	std::cout << std::endl;
	std::cout << GREEN << "----------------------" << BLANK << std::endl;
	std::cout << GREEN << "---------ex02---------" << BLANK << std::endl;
	std::cout << GREEN << "----------------------" << BLANK << std::endl;
	std::cout << std::endl;

	FragTrap frag("Fraggie");
	frag.highFivesGuys();
	std::cout << GREEN << "----------------------" << BLANK << std::endl;
	ship_is_ready(frag);
	std::cout << std::endl;

	ClapTrap	intruder(frag);
	intruder.attack("Fraggie");
	frag.takeDamage(30);

	ship_is_ready(frag);
	ship_is_ready(intruder);
	std::cout << std::endl;
	return (0);
}