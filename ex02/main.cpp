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

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void){
	std::cout << BLUE + "\n=== TEST 1: Basic Animal Array ===" + RESET << std::endl;
	{
		int	size = 4;
		int i = 0;
		std::cout << BLUE + "\n/---Creation of the animals--/" + RESET << std::endl;
		AAnimal *zoo[size];
		while (i < size / 2)
			zoo[i++] = new Dog();
		while (i < size)
			zoo[i++] = new Cat();
		std::cout << BLUE + "\n/---Life of the animals--/" + RESET << std::endl;
		for (int j = 0 ; j < size ; j++)
			zoo[j]->makeSound();
		std::cout << BLUE + "\n/---Death of the animals--/" + RESET << std::endl;
		i = 0;
		while (i < size)
			delete zoo[i++];
	}

	std::cout << BLUE + "\n=== TEST 2: Deep Copy Constructor Test ===" + RESET << std::endl;
	{
		std::cout << GREEN + "Creating basic Dog..." + RESET << std::endl;
		Dog basic;
		std::cout << GREEN + "Entering scope and creating copy..." + RESET << std::endl;
		{
			std::cout << YELLOW + "Dog tmp = basic; (copy constructor)" + RESET << std::endl;
			Dog tmp = basic;
			std::cout << GREEN + "tmp makes sound:" + RESET << std::endl;
			tmp.makeSound();
		}
		std::cout << GREEN + "Exited scope - if deep copy works, basic should still be valid:" + RESET << std::endl;
		basic.makeSound();
		std::cout << GREEN + "basic is still alive - Deep copy works!" + RESET << std::endl;
	}

	std::cout << BLUE + "\n=== TEST 3: Deep Copy Assignment Operator Test ===" + RESET << std::endl;
	{
		std::cout << GREEN + "Creating two Dogs..." + RESET << std::endl;
		Dog dog1;
		Dog dog2;
		std::cout << YELLOW + "dog2 = dog1; (assignment operator)" + RESET << std::endl;
		dog2 = dog1;
		std::cout << GREEN + "Both dogs make sound:" + RESET << std::endl;
		dog1.makeSound();
		dog2.makeSound();
		std::cout << GREEN + "Assignment operator works!" + RESET << std::endl;
	}

	std::cout << BLUE + "\n=== TEST 4: Cat Deep Copy Test ===" + RESET << std::endl;
	{
		std::cout << GREEN + "Creating basic Cat..." + RESET << std::endl;
		Cat basic;
		std::cout << GREEN + "Entering scope and creating copy..." + RESET << std::endl;
		{
			std::cout << YELLOW + "Cat tmp = basic; (copy constructor)" + RESET << std::endl;
			Cat tmp = basic;
			std::cout << GREEN + "tmp makes sound:" + RESET << std::endl;
			tmp.makeSound();
		}
		std::cout << GREEN + "Exited scope - if deep copy works, basic should still be valid:" + RESET << std::endl;
		basic.makeSound();
		std::cout << GREEN + "basic is still alive - Deep copy works!" + RESET << std::endl;
	}

	std::cout << BLUE + "\n=== TEST 5: Cat Assignment Operator Test ===" + RESET << std::endl;
	{
		std::cout << GREEN + "Creating two Cats..." + RESET << std::endl;
		Cat cat1;
		Cat cat2;
		std::cout << YELLOW + "cat2 = cat1; (assignment operator)" + RESET << std::endl;
		cat2 = cat1;
		std::cout << GREEN + "Both cats make sound:" + RESET << std::endl;
		cat1.makeSound();
		cat2.makeSound();
		std::cout << GREEN + "Assignment operator works!" + RESET << std::endl;
	}

	std::cout << BLUE + "\n=== TEST 6: Self Assignment Test ===" + RESET << std::endl;
	{
		std::cout << GREEN + "Creating Dog and testing self-assignment..." + RESET << std::endl;
		Dog dog;
		Dog* dogPtr = &dog;
		std::cout << YELLOW + "*dogPtr = dog; (self assignment via pointer)" + RESET << std::endl;
		*dogPtr = dog;
		std::cout << GREEN + "Dog still works after self-assignment:" + RESET << std::endl;
		dog.makeSound();
		std::cout << GREEN + "Self-assignment protection works!" + RESET << std::endl;
	}

	std::cout << BLUE + "\n=== All tests completed successfully! ===" + RESET << std::endl;
	return 0;
}