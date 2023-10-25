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

int main()
{
	ClapTrap clapTrap("John");
	clapTrap.Attack("Bob");
	clapTrap.TakeDamage(200);
	clapTrap.TakeDamage(200);
	clapTrap.BeRepaired(200);
	clapTrap.BeRepaired(std::numeric_limits<uint>::max());
	clapTrap.BeRepaired(std::numeric_limits<uint>::max());
	clapTrap.TakeDamage(200);
	clapTrap.TakeDamage(std::numeric_limits<uint>::max() / 2);
	return 0;
}