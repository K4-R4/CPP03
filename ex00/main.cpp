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
#include "ClapTrap.hpp"
#include <iostream>
#include <limits>

int main() {
  ClapTrap clap_trap("John");
  clap_trap.Attack("Bob");
  clap_trap.TakeDamage(200);
  clap_trap.TakeDamage(200);
  clap_trap.BeRepaired(200);
  clap_trap.BeRepaired(std::numeric_limits<uint>::max());
  clap_trap.BeRepaired(std::numeric_limits<uint>::max());
  clap_trap.TakeDamage(200);
  clap_trap.TakeDamage(std::numeric_limits<uint>::max() / 2);
  return 0;
}