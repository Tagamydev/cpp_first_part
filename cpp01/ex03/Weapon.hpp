/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:39:47 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 20:33:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class  Weapon {
 public:
    explicit Weapon(const std::string& weapon);
    explicit Weapon(const char *weapon);
    ~Weapon(void);
    const std::string  &getType(void);
    void        setType(const std::string &type);
    void        setType(const char *type);
 private:
    std::string  type;
};

#endif
