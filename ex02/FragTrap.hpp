/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:33:08 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:34:43 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:

	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& copy);
	~FragTrap();

	FragTrap&	operator= (const FragTrap& copy);

	void	highFivesGuys(void);

private:

};

std::ostream&	operator<< (std::ostream& os, const FragTrap& ft);
