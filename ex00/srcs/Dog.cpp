/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/25 09:39:10 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "[ DOG ] Constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::~Dog( void ) {
	std::cout << "[ DOG ] Destructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &copy ): Animal(copy) {
	std::cout << "[ DOG ] Copied" << std::endl;
	*this = copy;
	return ;
}

Dog& Dog::operator=( const Dog &copy ) {
	std::cout << "[ DOG ] Assignement operator called" << std::endl;
	Animal::operator=(copy);
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << "[ DOG ] Bark" << std::endl;
}

std::string const Dog::getType( void ) const {
	return this->_type;
}

void	Dog::setType( const std::string &type ) {
	this->_type = type;
	return ;
}