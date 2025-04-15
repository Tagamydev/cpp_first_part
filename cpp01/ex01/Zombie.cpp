/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:20:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/22 19:58:35 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
  this->name = "default zombie";
  std::cout << "Zombie borning" << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "Zombie name: " << this->name << " is dying" << std::endl;
}

void Zombie::coronation(std::string name) {
  this->name = name;
}
