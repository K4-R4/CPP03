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
  {
	std::cout << std::endl;
	std::cout << "===========================NORMAL TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	FragTrap tmp("Taro");
	FragTrap frag_trap(tmp);
	frag_trap = tmp;
	frag_trap.Attack("Jiro");
	frag_trap.Attack("Saburo");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	frag_trap.TakeDamage(2);
	frag_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	frag_trap.BeRepaired(2);
	frag_trap.BeRepaired(10);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	frag_trap.HighFiveGuys();
	frag_trap.HighFiveGuys();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================ENERGY TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	FragTrap frag_trap("Taro");
	for (int i = 0; i < 101; ++i) {
	  frag_trap.Attack("Jiro");
	}
	std::cout << "===========================DAMAGE===========================" << std::endl;
	frag_trap.TakeDamage(2);
	frag_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	frag_trap.BeRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	frag_trap.HighFiveGuys();
	frag_trap.HighFiveGuys();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST1===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	FragTrap frag_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	frag_trap.TakeDamage(std::numeric_limits<uint>::max());
	frag_trap.TakeDamage(30);
	std::cout << "===========================REPAIR===========================" << std::endl;
	frag_trap.BeRepaired(2);
	frag_trap.BeRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	frag_trap.HighFiveGuys();
	frag_trap.HighFiveGuys();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST2===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	FragTrap frag_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	frag_trap.TakeDamage(2);
	std::cout << "===========================REPAIR===========================" << std::endl;
	frag_trap.BeRepaired(2);
	frag_trap.BeRepaired(std::numeric_limits<uint>::max());
	frag_trap.BeRepaired(std::numeric_limits<uint>::max());
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	frag_trap.HighFiveGuys();
	frag_trap.HighFiveGuys();
  }
  return 0;
}