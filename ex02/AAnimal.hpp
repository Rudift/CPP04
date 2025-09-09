/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

	class AAnimal{
		protected:
			std::string	_type;
		public :
			//Canonical
			AAnimal(void);
			AAnimal(const AAnimal& other);
			AAnimal&	operator=(const AAnimal& other);
			virtual ~AAnimal(void);

			//Members
			virtual void	makeSound()const = 0;

			//Getter
			std::string	getType(void)const;
	};
#endif

