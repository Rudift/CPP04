/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 08:15:37 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 08:15:37 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Default constructor
WrongAnimal::WrongAnimal(){
	_type = "Random WrongAnimal";
	std::cout 
		<< GREEN
		<< "a wrong animal is created !"
		<< RESET
		<< std::endl;
}


//Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other){
	_type = other._type;
}

//Assignement operator 
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
WrongAnimal::~WrongAnimal(void){
	std::cout 
		<< RED
		<< "a wrong animal is dead !"
		<< RESET
		<< std::endl;
}

//Member fonctions
void	WrongAnimal::  makeSound(void)const{
	std::cout 
		<<"\xF0\x9F\x90\xB7"
		<< YELLOW + "Gruik !" + RESET << std::endl;
}

std::string	WrongAnimal::getType(void)const{
	return(_type);
}