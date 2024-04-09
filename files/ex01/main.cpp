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

#include "iter.hpp"

#include <iostream>

template <typename T>
void printElement(T &element)
{
    std::cout << element << " ";
}

int main(void)
{
	int *a = new int();
	*a = 42;
	std::cout << "iter on int pointer:\n";
	iter(a, 1, printElement<int>);
	std::cout << std::endl;
	delete (a);

    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "iter on int array:\n";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "iter on double array:\n";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "iter on char array:\n";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    return (0);
}
