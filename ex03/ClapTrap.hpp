/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:12:18 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 13:45:32 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		ClapTrap(void);
		std::string		_name;
		int				_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap	&other);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap&	other);
		
		std::string		get_name(void) const;
		unsigned int	get_attack_damage(void) const;
		unsigned int	get_energy(void)const;
		int				get_health(void) const;

		//void		set_name(std::string& name);
		//void		set_attack_damage(unsigned int attack_damage);
		//void		set_energy(unsigned int energy);
		//void		set_health(unsigned int health);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define CYAN "\033[0;36m"

#endif