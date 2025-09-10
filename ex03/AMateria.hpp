/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 13:49:41 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 13:49:41 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#  include <string>
#  include <iostream>
#  include "ICharacter.hpp"
#  include  "Colors.hpp"

class AMateria{
	protected :
		std::string	_type;
	public :
		//Canonical
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		virtual ~AMateria(void);
		//Getters
		std::string const & getType() const; //Returns the materia type
		//Member fonctions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif