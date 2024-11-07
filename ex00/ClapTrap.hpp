/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:54:49 by amylle            #+#    #+#             */
/*   Updated: 2024/11/07 16:04:56 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap
{

private:
	std::string	_name;
	int			_hp;
	int			_mana;
	int			_ap;

public:
	ClapTrap(const std::string name);
	~ClapTrap(void);

	void	attack(const std::string &name);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};
