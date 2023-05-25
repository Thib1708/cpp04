/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 13:41:57 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
			std::string _ideas[100];
	public:
			/* Constructors & Destructors */
			Brain( void );
			~Brain( void );
			Brain( const Brain & );
			Brain& operator=( const Brain &);

			/* Setters & Getters */
			std::string const	getIdea( const int );
			void				setIdea( std::string const & , const int );
};

#endif