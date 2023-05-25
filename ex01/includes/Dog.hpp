/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 13:42:37 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
			Brain *_brain;
	public:
			/* Constructor & Destructor */
			Dog( void );
			~Dog( void );
			Dog( const Dog & );
			Dog& operator=( const Dog &);
			
			/* Setters & Getters */
			std::string const	getType( void ) const;
			void				setType( const std::string & );
			Brain				*getBrain( void ) const ;
			void				setBrain( Brain * );
			
			/* Method */
			void				makeSound( void ) const;
};

#endif