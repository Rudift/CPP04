/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 13:54:22 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 13:54:22 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#  define ICHARACTER_HPP

#  include <string>

class AMateria; // Forward declaration

	class ICharacter
	{
		public:
			virtual std::string const & getName() const = 0;
			virtual void equip(AMateria* m) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter& target) = 0;

			//Destructor
			virtual	~ICharacter(){};
	};

#endif