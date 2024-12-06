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

ClapTrap::ClapTrap(void): _name("ClapTrap"), _hp(10), _energy(10), _ap(0)
{
	std::cout << "ClapTrap" << " has been default constructed\n";

}
ClapTrap::ClapTrap(const std::string name): _name(name), _hp(10), _energy(10), _ap(0)
{
	std::cout << name << " has been constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap& claptrap): _name(claptrap._name), _hp(claptrap._hp), _energy(claptrap._energy), _ap(claptrap._ap)
{
	std::cout << claptrap._name << " has been copy constructed\n";
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& claptrap)
{
	std::cout << "claptrap copy operator\n";
	this->_name = claptrap._name;
	this->_ap = claptrap._ap;
	this->_energy = claptrap._energy;
	this->_hp = claptrap._hp;
	return (*this);
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
	else if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to attack\n";
		return ;
	}
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << name;
		std::cout << ", causing " << this->_ap << " points of damage!\n";
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, chill bro.\n";
		return ;
	}
	this->_hp -= amount;
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
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to repair itself\n";
		return ;
	}
	else
	{
		this->_energy--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount;
		std::cout << " hp.\n";
		std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hp.\n";
	}
}
