/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:55:23 by amylle            #+#    #+#             */
/*   Updated: 2024/11/07 16:55:34 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ben("Ben");
	ClapTrap yom("Yom");

	ben.attack("Yom");
	yom.attack("Ben");
	ben.takeDamage(5);
	yom.attack("Ben");
	yom.attack("Ben");
}
