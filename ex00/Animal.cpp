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
Animal::~Animal(void){}

//Member fonctions
void	Animal::  makeSound(void)const{
	if (_type == "Cat")
		std::cout 
			<<"\xF0\x9F\x98\xBB"
			<< YELLOW + "Miaouuuuuh" + RESET << std::endl;
	else if (_type == "Dog")
		std::cout 
			<<"\xF0\x9F\x90\xB6"
			<< BLUE + "Wouf wouf" + RESET << std::endl;
}

std::string	Animal::getType(void)const{
	return(_type);
}