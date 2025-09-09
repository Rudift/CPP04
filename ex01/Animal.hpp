/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:42:37 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:42:37 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#  include <string>
#  include <iostream>
#  include "Colors.hpp"

	class Animal{
		protected:
			std::string	_type;
		public :
			//Canonical
			Animal(void);
			Animal(const Animal& other);
			Animal&	operator=(const Animal& other);
			virtual ~Animal(void);

			//Members
			virtual void	makeSound()const;

			//Getter
			std::string	getType(void)const;
	};
#endif

