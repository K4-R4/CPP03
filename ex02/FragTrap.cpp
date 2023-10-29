/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:55:42 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 21:32:21 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/25.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "FragTrap constructor called" << std::endl;
  hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
  ClapTrap::operator=(obj);
  std::cout << "FragTrap copy assignment operator called" << std::endl;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::Attack(const std::string &target) {
  if (energy_points_ <= 0) {
	std::cout << "FragTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (hit_points_ <= 0) {
	std::cout << "FragTrap is dead! Can't do anything" << std::endl;
	return;
  }
  --energy_points_;
  std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << attack_damage_
			<< " points of damage!" << std::endl;
}

void FragTrap::HighFiveGuys() {
  if (energy_points_ <= 0) {
	std::cout << "FragTrap out of energy! Can't do anything" << std::endl;
	return;
  }
  if (hit_points_ <= 0) {
	std::cout << "FragTrap is dead! Can't do anything" << std::endl;
	return;
  }
  std::cout << "FragTrap High five guys!" << std::endl;
}