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
		private :
			std::string	_name;
			AMateria	*_inventory[4];
			AMateria	*_unequiped[4];

		public :
			//Canonical
			Character(std::string name);
			Character(const Character& other);
			Character&	operator=(const Character& other);
			~Character();

			//Member Fonctions
			void	equip(AMateria* m);
			void	unequip(int idx);
			void	use(int idx, ICharacter& target);
			bool	inventoryFull();
	};

#endif



