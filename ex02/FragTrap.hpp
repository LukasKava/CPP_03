/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:28:15 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/23 13:36:14 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	private:
		FragTrap(void);
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);

		FragTrap&	operator=(const	FragTrap& other);
		
		void	highFivesGuys(void);
};

#endif