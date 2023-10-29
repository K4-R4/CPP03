/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:33:31 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 20:27:27 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/24.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <string>

class ClapTrap {
 public:
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &obj);
  ClapTrap &operator=(const ClapTrap &obj);
  ~ClapTrap();
  void Attack(const std::string &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);

 private:
  std::string name_;
  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
  bool IsAvailable() const;
};

#endif//EX00_CLAPTRAP_HPP
