/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:39:15 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 20:51:57 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/24.
//

#include "ScavTrap.hpp"
#include <iostream>

const unsigned int ScavTrap::kDefaultHitPoints = 100;
const unsigned int ScavTrap::kDefaultEnergyPoints = 50;
const unsigned int ScavTrap::kDefaultAttackDamage = 20;

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), is_gate_keeper_mode_(false) {
  std::cout << "ScavTrap constructor called" << std::endl;
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj), is_gate_keeper_mode_(obj.is_gate_keeper_mode_) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
  ClapTrap::operator=(obj);
  is_gate_keeper_mode_ = obj.is_gate_keeper_mode_;
  std::cout << "ScavTrap copy assignment operator called" << std::endl;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::Attack(const std::string &target) {
  if (energy_points_ <= 0) {
	std::cout << "ScavTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (hit_points_ <= 0) {
	std::cout << "ScavTrap is dead! Can't do anything" << std::endl;
	return;
  }
  --energy_points_;
  std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attack_damage_
			<< " points of damage!" << std::endl;
}

bool ScavTrap::IsGateKeeperMode() const {
  return is_gate_keeper_mode_;
}

void ScavTrap::SetIsGateKeeperMode(bool is_gate_keeper_mode) {
  is_gate_keeper_mode_ = is_gate_keeper_mode;
}

void ScavTrap::GuardGate() {
  if (energy_points_ <= 0) {
	std::cout << "ScavTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (hit_points_ <= 0) {
	std::cout << "ScavTrap is dead! Can't do anything" << std::endl;
	return;
  }
  if (!IsGateKeeperMode()) {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
	SetIsGateKeeperMode(true);
  } else
	std::cout << "ScavTrap is already in Gate keeper mode!" << std::endl;
}
