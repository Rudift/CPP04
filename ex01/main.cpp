/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:41:43 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:41:43 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << BLUE + "\n/---Creation of the animals--/" + RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << BLUE + "\n/---Life of the animals--/" + RESET << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wa->makeSound();
	wc->makeSound();
	meta->makeSound();

	std::cout << BLUE + "\n/---Death of the animals--/" + RESET << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wa;
	delete wc;
	return 0;
}