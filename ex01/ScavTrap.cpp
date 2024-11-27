/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:05:07 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:19:30 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_name = "Scavtrap";
	this->_hp = 100;
	this->_energy = 100;
	this->_ap = 30;
	std::cout << "Default Scavtrap constructor.\n";
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_ap = 30;
	std::cout << "Named Scavtrap constructor.\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy._name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_ap = 30;
	std::cout << "Copy Scavtrap constructor.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called.\n";
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& copy)
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_ap = copy._ap;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, it cant attack\n";
		return ;
	}
	else if (this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy to attack\n";
		return ;
	}
	else
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_ap << " points of damage!\n";
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in gatekeeper mode!!\n";
}
