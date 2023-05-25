/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/24 13:44:42 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "../includes/WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:
        
    public:
        /* Constructors & Destructors*/
        WrongCat( void );
        ~WrongCat( void );
        WrongCat( const WrongCat & );
        WrongCat& operator=( const WrongCat &);

        /* Setters & Getters */
		std::string const	getType( void ) const;
		void				setType( const std::string & );
        
        /* Method */
        void				makeSound( void ) const;
};

#endif