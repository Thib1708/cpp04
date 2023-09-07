/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 13:33:06 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "[ WRONGCAT ] Constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "[ WRONGCAT ] Destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat &copy ) {
	std::cout << "[ WRONGCAT ] Copied" << std::endl;
	*this = copy;
	return ;
}

WrongCat& WrongCat::operator=( const WrongCat &copy ) {
	std::cout << "[ WRONGCAT ]  Assignement operator called" << std::endl;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "[ WRONGCAT ] Wrong Meow" << std::endl;
	return ;
}

std::string const WrongCat::getType( void ) const {
	return this->_type;
}

void	WrongCat::setType( const std::string &type ) {
	this->_type = type;
}