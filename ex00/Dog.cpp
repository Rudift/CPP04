/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:43:18 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:43:18 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Default constructor
Dog::Dog(void){
	_type = "Dog";
	std::cout 
		<< GREEN
		<< "a dog is created !"
		<< RESET
		<< std::endl;
}

//Copy constructor
Dog::Dog(const Dog& other){
	_type = other._type;
}

//Assignement operator
Dog&	Dog::operator=(const Dog& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
Dog::~Dog(void){
	std::cout 
		<< RED
		<< "a dog is dead !"
		<< RESET
		<< std::endl;
}

void	Dog::makeSound(void)const{
	std::cout 
		<<"\xF0\x9F\x90\xB6"
		<< BLUE + "Wouf wouf" + RESET << std::endl;
}