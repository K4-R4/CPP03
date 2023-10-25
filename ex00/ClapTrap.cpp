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
ClapTrap::ClapTrap(const std::string &name)
	: name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
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

void ClapTrap::Attack(const std::string &target) {
  if (energy_points_ <= 0) {
	std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  --energy_points_;
  std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_
			<< " points of damage!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int amount) {
  if (hit_points_ == 0) {
	std::cout << "ClapTrap is already dead" << std::endl;
	return;
  }
  if (hit_points_ >= amount)
	hit_points_ -= amount;
  else
	hit_points_ = 0;
  std::cout << "ClapTrap " << name_ << " has taken " << amount << " points of damage, and now has "
			<< hit_points_
			<< " hit points!" << std::endl;
}

void ClapTrap::BeRepaired(unsigned int amount) {
  if (energy_points_ <= 0) {
	std::cout << "ClapTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (hit_points_ == std::numeric_limits<uint>::max()) {
	std::cout << "ClapTrap is fully repaired! No need to heal it anymore" << std::endl;
	return;
  }
  if (amount <= std::numeric_limits<uint>::max() - hit_points_) {
	hit_points_ += amount;
  } else
	hit_points_ = std::numeric_limits<uint>::max();
  --energy_points_;
  std::cout << "ClapTrap recovered " << amount << " hit points, and now has " << hit_points_ << " hit points!"
			<< std::endl;
}
