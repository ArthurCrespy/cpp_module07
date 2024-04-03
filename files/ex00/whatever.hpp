/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:58:02 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 15:10:52 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T   min(T nb0, T nb1)
{
	return (nb0 < nb1 ? nb0 : nb1);
}

template <typename T>
T   max(T nb0, T nb1)
{
	return (nb0 > nb1 ? nb0 : nb1);
}

#endif
