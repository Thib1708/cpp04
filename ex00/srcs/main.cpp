/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:32:02 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 13:35:36 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main( void )
{
	const Animal* meta				= new Animal();
	const WrongAnimal* wrong_meta	= new WrongAnimal();
	const Animal* dog				= new Dog();
	const Animal* cat				= new Cat();
	const WrongAnimal* wrong_cat	= new WrongCat();

	std::cout << BLUE << "------- GET TYPES ------" << RESET << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	
	std::cout << BLUE << "------ MAKE SOUNDS -----" << RESET << std::endl;
	meta->makeSound();
	wrong_meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrong_cat->makeSound();
	std::cout << BLUE << "------------------------" << RESET << std::endl;
	
	delete meta;
	delete wrong_meta;
	delete dog;
	delete cat;
	delete wrong_cat;

	return (0);
}