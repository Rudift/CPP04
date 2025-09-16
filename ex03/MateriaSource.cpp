/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-11 13:00:02 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-11 13:00:02 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//Default constructor
MateriaSource::MateriaSource(){}

//Copie constructor
MateriaSource::MateriaSource(const MateriaSource& other){
	std::cout << MAGENTA + "Copy of the spellbook !" + RESET << std::endl;
	for (int i = 0; i < 4; i++){
		if(other._spellbook[i])
			_spellbook[i] = other._spellbook[i]->clone();
		else
			_spellbook[i] = NULL;
	}

}

//Assignement operator
MateriaSource&	MateriaSource::operator=(const MateriaSource& other){
	if (this != &other){
		for (int i = 0; i < 4; i++){
			if(_spellbook[i]){
				delete _spellbook[i];
				_spellbook[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++){
			if (other._spellbook[i])
				_spellbook[i] = other._spellbook[i]->clone();
			else
				_spellbook[i] = NULL;
		}
	}
}

//Destructor
MateriaSource::~MateriaSource(){
	std::cout << RED + "The spellbook is burning !" + RESET << std::endl;
	for (int i = 0; i < 4; i++){
		if(_spellbook[i]){
			delete _spellbook[i];
			_spellbook[i] = NULL;
		}
	}
}

//Member fonctions
void		MateriaSource::learnMateria(AMateria* m){
	if (!m){
		std::cout
			<< RED + "No materia to put in the spellbook !!!" + RESET
			<< std::endl;
			return ;
	}
	if (spellbookFull()){
		std::cout
			<< RED + "Spellbook full !!!" + RESET
			<< std::endl;
			return ;
	}
	for (int i = 0; i < 4; i++){
		if (!_spellbook[i]){
			_spellbook[i] = m;
			std::cout
				<< MAGENTA
				<< _spellbook[i]->getType()
				<< " materia stored in the spellbook"
				<< RESET << std::endl;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (type == _spellbook[i]->getType())
			return (_spellbook[i]->clone());
	}
	return (0);
}

bool	MateriaSource::spellbookFull(){
	for (int i = 0; i < 4; i++){
		if (!_spellbook[i])
			return (false);
	}
	return (true);
}
