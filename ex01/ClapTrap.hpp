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
  ClapTrap(const std::string &name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
  ClapTrap(const ClapTrap &obj);
  ClapTrap &operator=(const ClapTrap &obj);
  virtual ~ClapTrap();
  const std::string &GetName() const;
  void SetName(const std::string &name);
  unsigned int GetHitPoints() const;
  void SetHitPoints(unsigned int hit_points);
  unsigned int GetEnergyPoints() const;
  void SetEnergyPoints(unsigned int energy_points);
  unsigned int GetAttackDamage() const;
  void SetAttackDamage(unsigned int attack_damage);
  void Attack(const std::string &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);

 private:
  std::string name_;
  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
};

#endif//EX00_CLAPTRAP_HPP
