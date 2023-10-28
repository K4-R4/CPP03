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

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20), is_gate_keeper_mode_(false) {
  std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj), is_gate_keeper_mode_(obj.is_gate_keeper_mode_) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
  ClapTrap::operator=(obj);
  is_gate_keeper_mode_ = obj.is_gate_keeper_mode_;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called" << std::endl;
}

bool ScavTrap::IsGateKeeperMode() const {
  return is_gate_keeper_mode_;
}

void ScavTrap::SetIsGateKeeperMode(bool is_gate_keeper_mode) {
  is_gate_keeper_mode_ = is_gate_keeper_mode;
}

void ScavTrap::GuardGate() {
  if (!IsGateKeeperMode()) {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
	SetIsGateKeeperMode(true);
  } else
	std::cout << "ScavTrap is already in Gate keeper mode!" << std::endl;
}
