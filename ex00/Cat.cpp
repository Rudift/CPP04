/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:43:40 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:43:40 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Default constructor
Cat::Cat(void){
	_type = "Cat";
	std::cout 
		<< GREEN
		<< "a cat is created !"
		<< RESET
		<< std::endl;
}

//Copy constructor
Cat::Cat(const Cat& other){
	_type = other._type;
}

//Assignement operator
Cat&	Cat::operator=(const Cat& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

//Destructor
Cat::~Cat(void){
	std::cout 
		<< RED
		<< "a cat is dead !"
		<< RESET
		<< std::endl;
}

void	Cat::makeSound(void)const{
	std::cout 
		<<"\xF0\x9F\x98\xBB"
		<< YELLOW + "Miaouuuuuh" + RESET << std::endl;
}