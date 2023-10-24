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

int main()
{
	ClapTrap clapTrap("John");
	clapTrap.attack("Bob");
	clapTrap.takeDamage(200);
	clapTrap.takeDamage(200);
	clapTrap.beRepaired(200);
	clapTrap.beRepaired(UINT_MAX);
	clapTrap.beRepaired(UINT_MAX);
	clapTrap.takeDamage(200);
	clapTrap.takeDamage(UINT_MAX / 2);
	return 0;
}