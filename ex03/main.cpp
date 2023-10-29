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
#include "DiamondTrap.hpp"
#include <iostream>
#include <limits>

int main() {
  {
	std::cout << std::endl;
	std::cout << "===========================NORMAL TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap tmp("Taro");
	DiamondTrap diamond_trap(tmp);
	diamond_trap = tmp;
	diamond_trap.Attack("Jiro");
	diamond_trap.Attack("Saburo");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.TakeDamage(2);
	diamond_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.BeRepaired(2);
	diamond_trap.BeRepaired(10);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.HighFiveGuys();
	diamond_trap.HighFiveGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.GuardGate();
	diamond_trap.GuardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.WhoAmI();
	diamond_trap.WhoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================ENERGY TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	for (int i = 0; i < 51; ++i) {
	  diamond_trap.Attack("Jiro");
	}
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.TakeDamage(2);
	diamond_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.BeRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.HighFiveGuys();
	diamond_trap.HighFiveGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.GuardGate();
	diamond_trap.GuardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.WhoAmI();
	diamond_trap.WhoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST1===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.TakeDamage(std::numeric_limits<uint>::max());
	diamond_trap.TakeDamage(30);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.BeRepaired(2);
	diamond_trap.BeRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.HighFiveGuys();
	diamond_trap.HighFiveGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.GuardGate();
	diamond_trap.GuardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.WhoAmI();
	diamond_trap.WhoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST2===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.TakeDamage(2);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.BeRepaired(2);
	diamond_trap.BeRepaired(std::numeric_limits<uint>::max());
	diamond_trap.BeRepaired(std::numeric_limits<uint>::max());
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.HighFiveGuys();
	diamond_trap.HighFiveGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.GuardGate();
	diamond_trap.GuardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.WhoAmI();
	diamond_trap.WhoAmI();
  }
  return 0;
}