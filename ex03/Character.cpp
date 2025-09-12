/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-11 12:46:50 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-11 12:46:50 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Default constructor
Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
		_unequiped[i] = NULL;
	}
	std::cout
		<< "The character "
		<< _name
		<< " is created"
		<< std::endl;
}

//Copy constructor
Character::Character(const Character& other){
	std::cout
		<< "Copie de "
		<< other._name
		<< std::endl;
	_name = other._name;
}

//Assignement operator
Character&	Character::operator=(const Character& other){
	if (this != &other){
		_name = other._name;
	}
	return (*this);
}

//Destructor
Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (_inventory[i])
			delete _inventory[i];
		if (_unequiped[i])
			delete _unequiped[i];
	}
	std::cout
		<< RED + "The character " + YELLOW
		<< _name
		<< RED + " is destroyed" + RESET
		<< std::endl;
}

//Member fonction

std::string const &	Character::getName()const{
	return (_name);
}

bool	Character::inventoryFull(){
	for (int i = 0; i < 4; i++){
		if (!_inventory[i])
			return (false);
	}
	return (true);
}

void	Character::equip(AMateria* m){
	if (!m){
		std::cout
			<< RED + "No materia to equip !!!" + RESET
			<< std::endl;
			return ;
	}

	for (int i = 0; i < 4; i++){
		if (_inventory[i] == m){
			std::cout
				<< RED + "Materia already equipped !!!" + RESET
				<< std::endl;
			return ;
		}
	}
	
	if (inventoryFull()){
		std::cout
			<< RED + "Inventory full !!!" + RESET
			<< std::endl;
			return ;
	}
	
	for (int i = 0; i < 4; i++){
		if(!_inventory[i]){
			_inventory[i] = m;
			std::cout
			<< MAGENTA
			<< _inventory[i]->getType()
			<< " materia is equiped"
			<< RESET << std::endl;
			break ;
		}
	}
	
}

//A finir !!!
void	Character::unequip(int idx){
	if (idx > -1 && idx < 4)
		_inventory[idx] = NULL;
	else
		std::cout
			<< RED + "Invalid inventory number !!!" + RESET
			<< std::endl;
}

void	Character::use(int idx, ICharacter& target){
	if (!_inventory[idx])
		std::cout
			<< RED + "Inexistant materia" + RESET
			<< std::endl;
	else
		_inventory[idx]->use(target);
}


