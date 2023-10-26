/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:35:24 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 22:35:21 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/25.
//

#include "DiamondTrap.hpp"
#include <iostream>

// TODO Frag, Scav copy constructor
DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name) {
  std::cout << "DiamondTrap constructor called" << std::endl;
  hit_points_ = FragTrap::kDefaultHitPoints;
  energy_points_ = ScavTrap::kDefaultEnergyPoints;
  attack_damage_ = FragTrap::kDefaultAttackDamage;
}