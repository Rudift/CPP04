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
#include "MateriaSource.hpp"

int	main(void){
	std::cout << MAGENTA + "\n/---🔮Creation of the Spellbook🔮---/" + RESET << std::endl;
	IMateriaSource*	grimoire = new MateriaSource();
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Cure());

	std::cout << MAGENTA + "\n/---🔮Introduction of the wizards🔮---/" + RESET << std::endl;
	ICharacter* gandalf = new Character("Gandalf");
	std::cout << "I'm Gandalf the white !" << std::endl;
	ICharacter* saroumane = new Character("Saroumane");
	std::cout << "Saaaaaroumaaaaaane !" << std::endl;

	std::cout << MAGENTA + "\n/---🔮Wizards are learning spells🔮---/" + RESET << std::endl;
	gandalf->equip(grimoire->createMateria("ice"));
	gandalf->equip(grimoire->createMateria("cure"));
	saroumane->equip(grimoire->createMateria("ice"));
	saroumane->equip(grimoire->createMateria("cure"));

	std::cout << MAGENTA + "\n/---🔮Saruman try to learn to many spell🔮---/" + RESET << std::endl;
	saroumane->equip(grimoire->createMateria("ice"));
	saroumane->equip(grimoire->createMateria("cure"));
	saroumane->equip(grimoire->createMateria("ice"));

	std::cout << MAGENTA + "\n/---\xF0\x9F\x94\xA5 Destruction \xF0\x9F\x94\xA5---/" + RESET << std::endl;
	delete grimoire;
	delete gandalf;
	delete saroumane;


	
	return 0;
}