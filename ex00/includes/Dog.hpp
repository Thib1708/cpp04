/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 17:13:04 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
    private:
        
    public:
       		/* Constructors & Destructors */
			Dog( void );
			~Dog( void );
			Dog( const Dog & );
			Dog& operator=( const Dog & );
			
			/* Getters & Setters*/
			std::string const	getType( void ) const;
			void				setType( const std::string & );
			
			/* Method */
			void				makeSound( void ) const;
};

#endif