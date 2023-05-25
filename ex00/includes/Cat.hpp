/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 17:13:11 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
		
	public:
			/* Constructors & Destructors */
			Cat( void );
			~Cat( void );
			Cat( const Cat & );
			Cat& operator=( const Cat & );
			
			/* Getters & Setters*/
			std::string const	getType( void ) const;
			void				setType( const std::string & );
			
			/* Method */
			void				makeSound( void ) const;
	};

#endif