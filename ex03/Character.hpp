/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-11 12:36:17 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-11 12:36:17 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

	class Character : public ICharacter{
		public :
			//Canonical
			Character();
			Character(const Character& other);
			Character&	operator=(const Character& other);
			~Character();
	}

#endif



