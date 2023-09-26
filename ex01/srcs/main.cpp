/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:32:02 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/26 10:32:30 by tgiraudo         ###   ########.fr       */
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
	int		max = 4;
	int		i;
	Animal	*animals[max];
	
	// Init the table of animals
	std::cout << BLUE << "-----CREATE DOGS-----" << RESET << std::endl;
	for (i = 0; i < max / 2; i++)
	{
		std::cout << GREEN << "Dog n•" << i << RESET << std::endl;
		animals[i] = new Dog();
	}
	std::cout << BLUE << "-----CREATE CATS-----" << RESET << std::endl;
	for (i = max / 2; i < max; i++)
	{
		std::cout << GREEN << "Cat n•" << i << RESET << std::endl;
		animals[i] = new Cat();
	}

	// Use the table to get types
	std::cout << BLUE << "-----ANIMALS TYPES-----" << RESET << std::endl;
	for (i = 0; i < max; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	
	// Free the memory
	std::cout << BLUE << "----DELETED ANIMALS----" << RESET << std::endl;
	for (i = 0; i < max; i++)
	{	
		std::cout << RED << "Delete animal n•" << i << RESET << std::endl;
		delete animals[i];
	}

	// Fill brain ideas
	std::cout << BLUE << "------FILL BRAIN-------" << RESET << std::endl;
	
	std::cout << GREEN << "Init Milou:" << RESET << std::endl;
	Dog	*milou = new Dog();
	milou->getBrain()->setIdea("My name is Milou!", 0);
	
	std::cout << GREEN << "Pluto is a copy of Milou." << RESET << std::endl;
	Dog	*pluto(milou);

	std::cout << YELLOW << "Idea of Milou: " << milou->getBrain()->getIdea(0) << RESET << std::endl;
	std::cout << YELLOW << "Idea of Pluto: " << pluto->getBrain()->getIdea(0) << RESET << std::endl;
	
	delete	milou;

	// Test deep copy
	std::cout << BLUE << "-------DEEP COPY-------" << RESET << std::endl;
	
	Dog	basic;
	basic.getBrain()->setIdea("Test", 0);
	basic.getBrain()->setIdea("un autre test", 50);
	{
		Dog	tmp = basic;
		for (int i = 0; i < 100; i++)
			std::cout << tmp.getBrain()->getIdea(i) << std::endl;
	}

	return (0);
}