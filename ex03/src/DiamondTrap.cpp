/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:39:31 by amylle            #+#    #+#             */
/*   Updated: 2024/11/28 18:57:01 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap_clap_name"), _name("DiamondTrap")
{
	this->_hp = FragTrap::_hp;
	this->_ap = FragTrap::_ap;
	this->_energy = ScavTrap::_energy;
	std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hp = FragTrap::_hp;
	this->_ap = FragTrap::_ap;
	this->_energy = ScavTrap::_energy;
	std::cout << "DiamondTrap named constructor called.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	operator=(*this);
	std::cout << "DiamondTrap copy constructor called.\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called.\n";
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& src)
{
	this->_name = src._name;
	FragTrap::_name = src._name + "_clap_name";
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_ap = src._ap;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
	
void	DiamondTrap::whoAmI(void) const
{
std::cout << "My name is: " << this->_name << ", my ClapTrap name is: " << ClapTrap::_name << ".\n";
}

unsigned int	DiamondTrap::getAp() const
{
	return (this->_ap);
}

unsigned int	DiamondTrap::getEnergy() const
{
	return (this->_energy);
}

unsigned int	DiamondTrap::getHp() const
{
	return (this->_hp);
}

std::string	DiamondTrap::getClapName() const
{
	return (ClapTrap::_name);
}

std::string	DiamondTrap::getName() const
{
	return (this->_name);
}


std::ostream&	operator<< (std::ostream& os, const DiamondTrap& dt)
{
	os << "my name is: " << dt.getName() << ".\nMy ClapTrap name is: " << dt.getClapName();
	os << ".\nMy hp is: " << dt.getHp() << ".\nMy energy is: " << dt.getEnergy();
	os << ".\nMy AP is: " << dt.getAp() << ".\n";
	return (os);
}
