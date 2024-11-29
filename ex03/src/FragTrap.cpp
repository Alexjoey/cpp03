/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:35:26 by amylle            #+#    #+#             */
/*   Updated: 2024/11/27 13:42:41 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("FragTrap")
{
	this->_hp = 100;
	this->_energy = 100;
	this->_ap = 30;
	std::cout << "Default Fragtrap constructor.\n";
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_ap = 30;
	std::cout << "Named Fragtrap constructor.\n";
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap()
{
	std::cout << "Named Fragtrap constructor.\n";
	operator=(copy);
}

FragTrap& FragTrap::operator= (const FragTrap& copy)
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_ap = copy._ap;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called.\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " says: yoooo high five man!!!\n";
}
