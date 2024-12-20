/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:55:23 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:19:59 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap ben("Ben");
	FragTrap frag("Frag");

	ben.attack("Yom");
	frag.attack("yom");
	frag.highFivesGuys();
	frag.takeDamage(10);
}
