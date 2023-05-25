/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 13:36:54 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
	private:
			Brain *_brain;
	public:
			/* Constructor & Destructor */
			Cat( void );
			~Cat( void );
			Cat( const Cat & );
			Cat& operator=( const Cat &);
			
			/* Setters & Getters */
			std::string const	getType( void ) const;
			void				setType( const std::string & );
			Brain				*getBrain( void ) const ;
			void				setBrain( Brain * );
			
			/* Method */
			void				makeSound( void ) const;
};

#endif