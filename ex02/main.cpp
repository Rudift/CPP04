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

int main(void){
	int	size = 5;
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
	return 0;
}