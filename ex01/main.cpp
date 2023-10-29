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
  {
	std::cout << std::endl;
	std::cout << "===========================NORMAL TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ScavTrap tmp("Taro");
	ScavTrap scav_trap(tmp);
	scav_trap = tmp;
	scav_trap.Attack("Jiro");
	scav_trap.Attack("Saburo");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	scav_trap.TakeDamage(2);
	scav_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	scav_trap.BeRepaired(2);
	scav_trap.BeRepaired(10);
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	scav_trap.GuardGate();
	scav_trap.GuardGate();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================ENERGY TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ScavTrap scav_trap("Taro");
	for (int i = 0; i < 51; ++i) {
	  scav_trap.Attack("Jiro");
	}
	std::cout << "===========================DAMAGE===========================" << std::endl;
	scav_trap.TakeDamage(2);
	scav_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	scav_trap.BeRepaired(2);
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	scav_trap.GuardGate();
	scav_trap.GuardGate();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST1===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ScavTrap scav_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	scav_trap.TakeDamage(std::numeric_limits<uint>::max());
	scav_trap.TakeDamage(30);
	std::cout << "===========================REPAIR===========================" << std::endl;
	scav_trap.BeRepaired(2);
	scav_trap.BeRepaired(2);
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	scav_trap.GuardGate();
	scav_trap.GuardGate();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST2===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ScavTrap scav_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	scav_trap.TakeDamage(2);
	std::cout << "===========================REPAIR===========================" << std::endl;
	scav_trap.BeRepaired(2);
	scav_trap.BeRepaired(std::numeric_limits<uint>::max());
	scav_trap.BeRepaired(std::numeric_limits<uint>::max());
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	scav_trap.GuardGate();
	scav_trap.GuardGate();
  }
  return 0;
}