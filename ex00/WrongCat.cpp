/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 08:58:16 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 08:58:16 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Default constructor
WrongCat::WrongCat(void){
	_type = "WrongCat";
	std::cout 
		<< GREEN
		<< "a wrong cat is created !"
		<< RESET
		<< std::endl;
}

//Copy constructor
WrongCat::WrongCat(const WrongCat& other){
	_type = other._type;
}

//Assignement operator
WrongCat&	WrongCat::operator=(const WrongCat& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
WrongCat::~WrongCat(void){
	std::cout 
		<< RED
		<< "a wrong cat is dead !"
		<< RESET
		<< std::endl;
}
