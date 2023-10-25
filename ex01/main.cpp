/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:48:04 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/21 11:58:52 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/20.
//
#include "ScavTrap.hpp"
#include <iostream>
#include <limits>

int main() {
  ScavTrap scav_trap("John");
  scav_trap.Attack("Bob");
  scav_trap.TakeDamage(1000);
  scav_trap.TakeDamage(1000);
  scav_trap.TakeDamage(1000);
  scav_trap.BeRepaired(1000);
  scav_trap.BeRepaired(std::numeric_limits<uint>::max());
  scav_trap.BeRepaired(std::numeric_limits<uint>::max());
  scav_trap.TakeDamage(1000);
  scav_trap.TakeDamage(std::numeric_limits<uint>::max());
  scav_trap.GuardGate();
  scav_trap.GuardGate();
  return 0;
}