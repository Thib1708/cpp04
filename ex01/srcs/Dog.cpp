/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 13:40:03 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "[ DOG ] Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::~Dog( void ) {
	std::cout << "[ DOG ] Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog::Dog( const Dog &copy ): Animal(copy) {
	std::cout << "[ DOG ] Copied" << std::endl;
	*this = copy;
	this->_brain = new Brain(*copy._brain);
	return ;
}

Dog& Dog::operator=( const Dog &copy ) {
	std::cout << "[ DOG ] Assignement operator called" << std::endl;
	Animal::operator=(copy);
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << "[ DOG ] Bark" << std::endl;
	return ;
}

std::string const Dog::getType( void ) const {
	return this->_type;
}

void	Dog::setType( const std::string &type ) {
	this->_type = type;
	return ;
}

Brain*	Dog::getBrain( void ) const {
	return this->_brain;
}

void	Dog::setBrain( Brain *brain ) {
	this->_brain = brain;
	return ;
}