/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:55:42 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 21:26:24 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/25.
//

#ifndef EX01_EX02_FRAGTRAP_HPP_
#define EX01_EX02_FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &obj);
  FragTrap &operator=(const FragTrap &obj);
  ~FragTrap();
  void HighFiveGuys();
 protected:
  static const unsigned int kDefaultHitPoints = 100;
  static const unsigned int kDefaultEnergyPoints = 100;
  static const unsigned int kDefaultAttackDamage = 30;
};

#endif //EX01_EX02_FRAGTRAP_HPP_
