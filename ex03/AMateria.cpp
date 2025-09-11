/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 13:49:51 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 13:49:51 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Default constructor
AMateria::AMateria(std::string const & type):_type(type){
	std::cout
		<< MAGENTA
		<< "A materia is created"
		<< RESET
		<< std::endl;
}

//Copy constructor
AMateria::AMateria(const AMateria& other){
	_type = other._type;
}

//Assignement operator
AMateria&	AMateria::operator=(const AMateria& other){
	if (this != &other)
		_type = other._type;
	return (*this);
}

//Destructor
AMateria::~AMateria(){
	std::cout
		<< MAGENTA
		<< "A materia is destroyed"
		<< RESET
		<< std::endl;
}

//Member fonctions
std::string const & AMateria::getType()const{
	return(_type);
}

void	AMateria::use(ICharacter& target){
	if (_type == "ice")
		std::cout
			<< CYAN
			<< "*shoots an ice bolt at "
			<< YELLOW << target.getName() << CYAN << " *"
			<< RESET << std::endl;
	else if (_type == "cure")
		std::cout
			<< GREEN
			<< "*shoots an ice bolt at "
			<< YELLOW << target.getName() << GREEN << " *"
			<< RESET << std::endl;
}
