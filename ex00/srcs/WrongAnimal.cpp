/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 11:02:05 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "[ WRONGANIMAL ] Constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "[ WRONGANIMAL ] Destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	std::cout << "[ WRONGANIMAL ] Copied" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &copy ) {
	std::cout << "[ WRONGANIMAL ]  Assignement operator called" << std::endl;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "[ WRONGANIMAL ] wrong sound" << std::endl;
	return ;
}

std::string const WrongAnimal::getType( void ) const {
	return this->_type;
}

void	WrongAnimal::setType( const std::string &type ) {
	this->_type = type;
}