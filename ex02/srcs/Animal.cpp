/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 17:15:43 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ): _type("default_type"){
	std::cout << "[ ANIMAL ] Constructor called" << std::endl;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "[ ANIMAL ] Destructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal &copy ) {
	std::cout << "[ ANIMAL ] Copied" << std::endl;
	*this = copy;
	return ;
}

Animal& Animal::operator=( const Animal &copy ) {
	std::cout << "[ ANIMAL ] Assignment operator called" << std::endl;
	this->_type = copy._type;
	return *this;
}

void Animal::makeSound( void ) const {
	std::cout << "[ ANIMAL ] sound" << std::endl;
	return ;
}

std::string const Animal::getType( void ) const {
	return this->_type;
}

void	Animal::setType( const std::string &type ) {
	this->_type = type;
}
