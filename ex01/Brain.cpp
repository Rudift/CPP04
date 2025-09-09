/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 09:32:46 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 09:32:46 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Default constructor
Brain::Brain(){
	std::cout 
		<< GREEN
		<< "a Brain is created !"
		<< RESET
		<< std::endl;
}


//Copy constructor
Brain::Brain(const Brain& other){
	for (int i = 0 ; i < 100 ; i++){
		this->ideas[i] = other.ideas[i];
	}
}

//Assignement operator 
Brain&	Brain::operator=(const Brain& other){
	if (this != &other){
		for (int i = 0 ; i < 100 ; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

//Destructor
Brain::~Brain(void){
	std::cout 
		<< RED
		<< "an Brain is dead !"
		<< RESET
		<< std::endl;
}

