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

int	main(void){
	AMateria*	spelIce = new Ice("ice");
	std::cout
		<< spelIce->getType()
		<< std::endl;
}