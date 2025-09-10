/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 12:59:03 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-10 12:59:03 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Default constructor
Cure::Cure(std::string const & type) : AMateria(type){
	_type = "cure";
	std::cout
		<< GREEN
		<< "Cure is created"
		<< RESET
		<< std::endl;
}

//Copy constructor
Cure::Cure(const Cure& other) : AMateria(other){
	_type = other._type;
}

//Assignement operator
Cure&	Cure::operator=(const Cure& other){
	if (this != &other){
		AMateria::operator=(other);
	}
	return (*this);
}

//Destructor
Cure::~Cure(){
	std::cout
		<< GREEN
		<< "Cure is destroyed"
		<< RESET
		<< std::endl;
}