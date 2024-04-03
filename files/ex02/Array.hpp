/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:20:46 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 15:20:50 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &obj);
		~Array(void);

		Array &operator=(Array const &rhs);

		T &operator[](unsigned int n);
		unsigned int size(void) const;

		class OutOfLimits : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class EmptyArray : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
