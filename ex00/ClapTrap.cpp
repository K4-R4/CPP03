/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:33:31 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/24 22:33:01 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

//
// Created by k.t. on 2023/10/24.
//
ClapTrap::ClapTrap(const std::string &name)
		: m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
		: m_name(obj.m_name), m_hitPoints(obj.m_hitPoints), m_energyPoints(obj.m_energyPoints),
		  m_attackDamage(obj.m_attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	m_name         = obj.m_name;
	m_hitPoints    = obj.m_hitPoints;
	m_energyPoints = obj.m_energyPoints;
	m_attackDamage = obj.m_attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (m_energyPoints <= 0)
	{
		std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
		return;
	}
	m_energyPoints--;
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoints == 0)
	{
		std::cout << "ClapTrap is already dead" << std::endl;
		return;
	}
	if (m_hitPoints >= amount)
		m_hitPoints -= amount;
	else
		m_hitPoints = 0;
	std::cout << "ClapTrap " << m_name << " has taken " << amount << " points of damage, and now has " << m_hitPoints
			  << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoints <= 0)
	{
		std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
		return;
	}
	if (m_hitPoints == UINT_MAX)
	{
		std::cout << "ClapTrap is fully repaired! No need to heal it anymore" << std::endl;
		return;
	}
	if (amount <= UINT_MAX - m_hitPoints)
	{
		m_hitPoints += amount;
	} else
		m_hitPoints = UINT_MAX;
	m_energyPoints--;
	std::cout << "ClapTrap recovered " << amount << " hit points, and now has " << m_hitPoints << " hit points!"
			  << std::endl;
}
