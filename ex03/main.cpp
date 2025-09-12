/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-11 09:31:20 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-11 09:31:20 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main(void){
	ICharacter* gandalf = new Character("Gandalf");
	ICharacter*	saruman = new Character("Saruman");
	AMateria*	spelIce1 = new Ice("ice");
	AMateria*	spelIce2 = new Ice("ice");
	AMateria*	spelIce3 = new Ice("ice");
	AMateria*	spelIce4 = new Ice("ice");
	AMateria*	spelCure = new Cure("cure");
	std::cout
		<< spelIce1->getType()
		<< std::endl;
	gandalf->equip(spelIce1);
	gandalf->equip(spelIce2);
	gandalf->equip(spelIce3);
	gandalf->equip(spelIce4);
	gandalf->use(0, *saruman);
	saruman->equip(spelCure);
	saruman->use(0, *saruman);

	delete gandalf;
	delete saruman;
}