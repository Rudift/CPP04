/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:42:59 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:42:59 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#  include "Animal.hpp"
#  include "Brain.hpp"

	class Dog: public Animal{
		public:
			//Canonical
			Dog(void);
			Dog(const Dog& other);
			Dog& operator=(const Dog& other);
			~Dog();

			//Member fonction
			virtual void	makeSound()const;
			
		private :
			Brain	*_brain;
	};
#endif