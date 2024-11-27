/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:59:30 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:34:44 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:

	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& copy);
	~ScavTrap();

	ScavTrap&	operator= (const ScavTrap& copy);

	void	guardGate();
	void	attack(const std::string& target);

private:


};
