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
  {
	std::cout << std::endl;
	std::cout << "===========================NORMAL TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ClapTrap tmp("Taro");
	ClapTrap clap_trap(tmp);
	clap_trap = tmp;
	clap_trap.Attack("Jiro");
	clap_trap.Attack("Saburo");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	clap_trap.TakeDamage(2);
	clap_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	clap_trap.BeRepaired(2);
	clap_trap.BeRepaired(10);
  }
  {
	std::cout << std::endl;
	std::cout << "===========================ENERGY TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ClapTrap clap_trap("Taro");
	for (int i = 0; i < 11; ++i) {
	  clap_trap.Attack("Jiro");
	}
	std::cout << "===========================DAMAGE===========================" << std::endl;
	clap_trap.TakeDamage(2);
	clap_trap.TakeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	clap_trap.BeRepaired(2);
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST1===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ClapTrap clap_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	clap_trap.TakeDamage(std::numeric_limits<uint>::max());
	clap_trap.TakeDamage(30);
	std::cout << "===========================REPAIR===========================" << std::endl;
	clap_trap.BeRepaired(2);
	clap_trap.BeRepaired(2);
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST2===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	ClapTrap clap_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	clap_trap.TakeDamage(2);
	std::cout << "===========================REPAIR===========================" << std::endl;
	clap_trap.BeRepaired(2);
	clap_trap.BeRepaired(std::numeric_limits<uint>::max());
	clap_trap.BeRepaired(std::numeric_limits<uint>::max());
  }
  return 0;
}