/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 11:45:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <Contact.hpp>
# include <limits>
# include <cstdlib>
# include <cstring>


class  PhoneBook {
 public:
    void  addcontact(void);
    void  search(void);
    PhoneBook();
    ~PhoneBook();
 private:
    Contact  contacts[8];
    int    ii;
    void  seecontact(size_t y);
};

#endif

