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
#include <limits>
#include <iostream>
#include <string>

//
// Created by k.t. on 2023/10/24.
//
ClapTrap::ClapTrap(const std::string &name, unsigned int hit_points, unsigned int energy_points,
				   unsigned int attack_damage)
	: name_(name), hit_points_(hit_points), energy_points_(energy_points), attack_damage_(attack_damage) {
  std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
	: name_(obj.name_), hit_points_(obj.hit_points_), energy_points_(obj.energy_points_),
	  attack_damage_(obj.attack_damage_) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
  name_ = obj.name_;
  hit_points_ = obj.hit_points_;
  energy_points_ = obj.energy_points_;
  attack_damage_ = obj.attack_damage_;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap destructor called" << std::endl;
}
const std::string &ClapTrap::GetName() const {
  return name_;
}
void ClapTrap::SetName(const std::string &name) {
  name_ = name;
}
unsigned int ClapTrap::GetHitPoints() const {
  return hit_points_;
}
void ClapTrap::SetHitPoints(unsigned int hit_points) {
  hit_points_ = hit_points;
}
unsigned int ClapTrap::GetEnergyPoints() const {
  return energy_points_;
}
void ClapTrap::SetEnergyPoints(unsigned int energy_points) {
  energy_points_ = energy_points;
}
unsigned int ClapTrap::GetAttackDamage() const {
  return attack_damage_;
}
void ClapTrap::SetAttackDamage(unsigned int attack_damage) {
  attack_damage_ = attack_damage;
}

void ClapTrap::Attack(const std::string &target) {
  if (GetEnergyPoints() <= 0) {
	std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  SetEnergyPoints(GetEnergyPoints() - 1);
  std::cout << "ClapTrap " << GetName() << " attacks " << target << ", causing " << GetAttackDamage()
			<< " points of damage!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int amount) {
  if (GetHitPoints() == 0) {
	std::cout << "ClapTrap is already dead" << std::endl;
	return;
  }
  if (GetHitPoints() >= amount)
	SetHitPoints(GetHitPoints() - amount);
  else
	SetHitPoints(0);
  std::cout << "ClapTrap " << GetName() << " has taken " << amount << " points of damage, and now has "
			<< GetHitPoints()
			<< " hit points!" << std::endl;
}

void ClapTrap::BeRepaired(unsigned int amount) {
  if (GetEnergyPoints() <= 0) {
	std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (GetHitPoints() == std::numeric_limits<uint>::max()) {
	std::cout << "ClapTrap is fully repaired! No need to heal it anymore" << std::endl;
	return;
  }
  if (amount <= std::numeric_limits<uint>::max() - GetHitPoints()) {
	SetHitPoints(GetHitPoints() + amount);
  } else
	SetHitPoints(std::numeric_limits<uint>::max());
  SetEnergyPoints(GetEnergyPoints() - 1);
  std::cout << "ClapTrap recovered " << amount << " hit points, and now has " << GetHitPoints() << " hit points!"
			<< std::endl;
}
