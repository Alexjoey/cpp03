/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:54:49 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:11:08 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap
{

protected:

	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_ap;

public:

	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& claptrap);
	virtual ~ClapTrap(void);
	ClapTrap&	operator= (const ClapTrap& claptrap);

	virtual void	attack(const std::string &name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};
