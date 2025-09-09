/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:42:46 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:42:46 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//Default constructor
AAnimal::AAnimal(){
	_type = "Random Aanimal";
	std::cout 
		<< GREEN
		<< "an Aanimal is created !"
		<< RESET
		<< std::endl;
}


//Copy constructor
AAnimal::AAnimal(const AAnimal& other){
	_type = other._type;
}

//Assignement operator 
AAnimal&	AAnimal::operator=(const AAnimal& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
AAnimal::~AAnimal(void){
	std::cout 
		<< RED
		<< "an Aanimal is dead !"
		<< RESET
		<< std::endl;
}

//Member fonctions
std::string	AAnimal::getType(void)const{
	return(_type);
}