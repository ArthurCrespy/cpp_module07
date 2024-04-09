/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:06:04 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 15:10:27 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename A, typename B, typename C>
void iter(A *array, B length, C func)
{
	if (!array || length < 0|| !func)
		return ;
	for (B i = 0; i < length; ++i)
		func(array[i]);
}

#endif
