/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:28:15 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 16:16:15 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: /*virtual*/ virtual public ClapTrap
{
	protected:
		FragTrap(void);
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);

		FragTrap&	operator=(const	FragTrap& other);
		
		void		highFivesGuys(void);

		void		set_attack_damage(void);
		void		set_energy(void);
		void		set_health(void);
};

#endif