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

#include "./inc/ClapTrap.hpp"
#include "./inc/ScavTrap.hpp"
#include "./inc/FragTrap.hpp"
#include "./inc/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap ben("ben");
	DiamondTrap yom;

	yom = ben;
	ben.whoAmI();
	ben.attack("yom");
	std::cout << ben << yom;
}
