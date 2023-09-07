/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 13:33:20 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "[ CAT ] Constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::~Cat( void ) {
	std::cout << "[ CAT ] Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat::Cat( const Cat &copy ): Animal(copy) {
	std::cout << "[ CAT ] Copied" << std::endl;
	*this = copy;
	this->_brain = new Brain(*copy._brain);
	return ;
}

Cat& Cat::operator=( const Cat &copy ) {
	std::cout << "[ CAT ] Assignement operator called" << std::endl;
	Animal::operator=(copy);
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "[ CAT ] Meow" << std::endl;
	return ;
}

std::string const Cat::getType( void ) const {
	return this->_type;
}

void	Cat::setType( const std::string &type ) {
	this->_type = type;
	return ;
}

Brain*	Cat::getBrain( void ) const {
	return this->_brain;
}

void	Cat::setBrain( Brain *brain ) {
	this->_brain = brain;
	return ;
}