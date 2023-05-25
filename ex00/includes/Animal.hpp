/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 17:11:39 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
			std::string _type;
	public:
			/* Constructors & Destructors */
			Animal( void );
			virtual ~Animal( void );
			Animal( const Animal & );
			Animal& operator=( const Animal &);

			/* Setters & Getters */
			std::string const getType( void ) const;
			void    setType( const std::string & );
			
			/* Method */
			virtual void    makeSound( void ) const;
};

#endif