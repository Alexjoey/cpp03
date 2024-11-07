/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:58:30 by amylle            #+#    #+#             */
/*   Updated: 2024/11/07 16:04:53 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name): _name(name), _hp(10), _mana(10), _ap(0)
{
	std::cout << name << " has been constructed\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " has been destructed\n";
}

void	ClapTrap::attack(const std::string &name)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, it cant attack\n";
		return ;
	}
	else if (this->_mana <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to attack\n";
		return ;
	}
	else
	{
		this->_mana--;
		std::cout << "ClapTrap " << this->_name << " attacks " << name;
		std::cout << ", causing " << this->_ap << " points of damage!\n";
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead, chill bro.\n";
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount;
	std::cout << " points of damage.\n";
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " has died.\n";
	else
		std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hp left.\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, it cant repair itself\n";
		return ;
	}
	if (this->_mana <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to repair itself\n";
		return ;
	}
	else
	{
		this->_mana--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount;
		std::cout << " hp.\n";
		std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hp.\n";
	}
}