/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:33:31 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/24 22:06:46 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/24.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <string>


class ClapTrap
{
public:
	ClapTrap(const std::string &mName);

	ClapTrap(const ClapTrap &obj);

	ClapTrap &operator=(const ClapTrap &obj);

	~ClapTrap();

	void attack(const std::string &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

private:
	std::string  m_name;
	unsigned int m_hitPoints;
	unsigned int m_energyPoints;
	unsigned int m_attackDamage;
};


#endif//EX00_CLAPTRAP_HPP
