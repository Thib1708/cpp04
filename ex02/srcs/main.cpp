/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:32:02 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 16:45:40 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 10

int main(void)
{
	std::cout << BLUE << "---- MILOU --------" << RESET << std::endl;
	Dog	milou;
	milou.makeSound();
	
	std::cout << YELLOW << "---- GARFIELD -----" << RESET << std::endl;
	Cat	garfield;
	garfield.makeSound();
	
	// std::cout << YELLOW << "-- ANIMAL -------" << RESET << std::endl;
	// Animal	animal;

	std::cout << RED << "---- DESTRUCTORS --" << RESET << std::endl;
	return (0);
}