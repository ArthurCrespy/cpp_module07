/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:02:20 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 15:02:21 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

int main(void)
{
	Array<int> emptyArray;
	std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

	Array<int> intArray(5);
	std::cout << "Size of intArray: " << intArray.size() << std::endl;

    int *a = new int();
    *a = 10;
    std::cout << "*a: " << *a << std::endl;
    delete (a);

	Array<int> copiedArray(intArray);
	std::cout << "Size of copiedArray: " << copiedArray.size() << std::endl;

	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Size of assignedArray: " << assignedArray.size() << std::endl;

	std::cout << "First element of intArray: " << intArray[0] << std::endl;

	try
	{
		std::cout << "Element at index 10 (out-of-bounds): " << intArray[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught - " << e.what() << std::endl;
	}

	return (0);
}
