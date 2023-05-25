/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/25 09:38:01 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "[ CAT ] Constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::~Cat( void ) {
	std::cout << "[ CAT ] Destructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat &copy ): Animal(copy) {
	std::cout << "[ CAT ] Copied" << std::endl;
	*this = copy;
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
}