/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:42:46 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:42:46 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Default constructor
Animal::Animal(){
	_type = "Random animal";
	std::cout 
		<< GREEN
		<< "an animal is created !"
		<< RESET
		<< std::endl;
}


//Copy constructor
Animal::Animal(const Animal& other){
	_type = other._type;
}

//Assignement operator 
Animal&	Animal::operator=(const Animal& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
Animal::~Animal(void){
	std::cout 
		<< RED
		<< "an animal is dead !"
		<< RESET
		<< std::endl;
}

//Member fonctions
void	Animal::  makeSound(void)const{
	std::cout 
		<<"\xF0\x9F\x90\xB7"
		<< YELLOW + "Gruik !" + RESET << std::endl;
}

std::string	Animal::getType(void)const{
	return(_type);
}