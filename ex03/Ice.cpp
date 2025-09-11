/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 12:58:48 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-10 12:58:48 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type){
	_type = "Ice";
	std::cout
		<< GREEN
		<< "Ice is created"
		<< RESET
		<< std::endl;
}

//Copy constructor
Ice::Ice(const Ice& other) : AMateria(other){
	_type = other._type;
}

//Assignement operator
Ice&	Ice::operator=(const Ice& other){
	if (this != &other){
		AMateria::operator=(other);
	}
	return (*this);
}

//Destructor
Ice::~Ice(){
	std::cout
		<< GREEN
		<< "Ice is destroyed"
		<< RESET
		<< std::endl;
}

//Member fonction
AMateria*	Ice::clone()const{
	AMateria*	clone = new Ice("ice");
	return (clone);
}