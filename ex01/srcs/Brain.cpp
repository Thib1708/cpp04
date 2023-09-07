/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 13:33:23 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "[ BRAIN ] Constructor called" << std::endl;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "[ BRAIN ] Destructor called" << std::endl;
	return ;
}

Brain::Brain( const Brain &copy ) {
	std::cout << "[ BRAIN ] Copied" << std::endl;
	*this = copy;
	return ;
}

Brain& Brain::operator=( const Brain &copy ) {
	std::cout << "[ BRAIN ] Assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++ )
		this->_ideas[i] = copy._ideas[i];
	return *this;
}

std::string const	Brain::getIdea( const int index ) {
	if (index < 0 || index >= 100)
		return "Wrong index";
	return this->_ideas[index];
}

void	Brain::setIdea( std::string const &idea, const int index ) {
	if (index < 0 || index >= 100)
		std::cout << "Wrong index" << std::endl;
	else 
		this->_ideas[index] = idea;
}