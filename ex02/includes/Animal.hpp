/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/25 09:57:42 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
			std::string _type;
			Brain		*_brain;
	public:
			/* Constructors & Destructors */
			Animal( void );
			virtual ~Animal( void );
			Animal( const Animal & );
			Animal& operator=( const Animal &);

			/* Setters & Getters */
			std::string const		getType( void ) const;
			void					setType( const std::string & );
			virtual Brain			*getBrain( void ) const = 0;

			/* Method */
			virtual void    makeSound( void ) const;
};

#endif