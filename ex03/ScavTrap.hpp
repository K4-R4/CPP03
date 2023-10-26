/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:39:15 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/24 22:39:24 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/24.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &obj);
  ScavTrap &operator=(const ScavTrap &obj);
  ~ScavTrap();
  void GuardGate();
  bool IsGateKeeperMode() const;
  void SetIsGateKeeperMode(bool is_gate_keeper_mode);
 private:
  bool is_gate_keeper_mode_;
 protected:
  static const unsigned int kDefaultHitPoints = 100;
  static const unsigned int kDefaultEnergyPoints = 50;
  static const unsigned int kDefaultAttackDamage = 20;
};

#endif //EX01_SCAVTRAP_HPP
