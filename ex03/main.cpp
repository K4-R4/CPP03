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
#include "FragTrap.hpp"
#include <iostream>
#include <limits>

int main() {
  FragTrap frag_trap("John");
  frag_trap.Attack("Bob");
  frag_trap.TakeDamage(1000);
  frag_trap.TakeDamage(1000);
  frag_trap.TakeDamage(1000);
  frag_trap.BeRepaired(1000);
  frag_trap.BeRepaired(std::numeric_limits<uint>::max());
  frag_trap.BeRepaired(std::numeric_limits<uint>::max());
  frag_trap.TakeDamage(1000);
  frag_trap.TakeDamage(std::numeric_limits<uint>::max());
  frag_trap.HighFiveGuys();
  frag_trap.HighFiveGuys();
  return 0;
}