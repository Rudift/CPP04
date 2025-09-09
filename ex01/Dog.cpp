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
	_brain = new Brain();
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
	delete _brain;
	std::cout 
		<< RED
		<< "a dog is dead !"
		<< RESET
		<< std::endl;
}