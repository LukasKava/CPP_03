/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:25:03 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/21 16:28:04 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
	ClapTrap	ship1("Vogon_attack_ship");
	ClapTrap	ship2;
	ClapTrap	ship3("Emperors ship");

	ship_is_ready(ship1);
	ship_is_ready(ship2);
	ship_is_ready(ship3);

	//Upgrade the Emperors ship
	ship3.set_name("Emperror the great");
	ship3.set_health(INT_MAX);
	ship3.set_attack_damage(500);
	ship3.set_energy(INT_MAX);
	
	//Upgrade Vogons to middle tear
	ship1.set_health(100);
	ship1.set_energy(100);
	ship1.set_attack_damage(2);

	ship_is_ready(ship1);
	ship_is_ready(ship2);
	ship_is_ready(ship3);
	std::cout << std::endl;

	//First battle bot vs Vogon
	ship2.attack("Vogon_attack_ship");
	ship1.attack("Bot");
	ship2.takeDamage(100);
	ship2.takeDamage(100);
	
	//Another bot
	ClapTrap ship4;
	ship1.attack("Bot");
	ship4.takeDamage(4);
	ship4.beRepaired(2);
	ship_is_ready(ship4);
	ship_is_ready(ship1);

	//Vogons get destroyded by the emperror
	ship1.attack("Emperror the great");
	ship3.takeDamage(ship1.get_attack_damage());
	ship3.attack("Vogon_attack_ship");
	ship1.takeDamage(ship3.get_attack_damage());

	ship_is_ready(ship1);
	ship_is_ready(ship2);
	ship_is_ready(ship3);

	return (0);
}