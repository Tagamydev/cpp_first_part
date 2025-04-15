/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/07 22:56:37 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <cmath>

//class
class	Fixed{
	/* here every public statement */
	public:

	/* Orthodox Canonical Form Requirements */
		/* Constructor */
		Fixed(void);
		/* Copy Constructor */
		Fixed(const Fixed& other);
		/* Destructor */
		~Fixed(void);

	/* Operators Overload */
		/* Copy Assignment Operator */
		Fixed&	operator = (const Fixed& other);

	/* Funtions */
		/* other funtions here */
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	/* here every private statement */
	private:
		int			value;
		static const int	bits = 8;
};

#endif
