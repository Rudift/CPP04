/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 08:13:12 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 08:13:12 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP
#  include <string>
#  include <iostream>
#  include "Colors.hpp"

	class WrongAnimal{
		protected:
			std::string	_type;
		public :
			//Canonical
			WrongAnimal(void);
			WrongAnimal(const WrongAnimal& other);
			WrongAnimal&	operator=(const WrongAnimal& other);
			virtual ~WrongAnimal(void);

			//Members
			virtual void	makeSound()const;

			//Getter
			std::string	getType(void)const;
	};
#endif