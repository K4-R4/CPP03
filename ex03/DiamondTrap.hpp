/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:35:24 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/25 22:25:28 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by k.t. on 2023/10/25.
//

#ifndef EX01_EX03_DIAMONDTRAP_HPP_
#define EX01_EX03_DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap(const std::string &name);
  DiamondTrap(const DiamondTrap &obj);
  DiamondTrap &operator=(const DiamondTrap &obj);
  ~DiamondTrap();
  void Attack(const std::string &name);
  void WhoAmI();
 private:
  std::string name_;
};

#endif //EX01_EX03_DIAMONDTRAP_HPP_
