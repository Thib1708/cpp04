/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 17:07:10 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
			std::string _type;
	public:
			/* Constructors & Destructors */
			WrongAnimal( void );
			virtual ~WrongAnimal( void );
			WrongAnimal( const WrongAnimal & );
			WrongAnimal& operator=( const WrongAnimal &);
			
			/* Setters & Getters */
			std::string const   getType( void ) const;
			void				setType( const std::string & );
			
			/* Method */
			void				makeSound( void ) const;
};

#endif