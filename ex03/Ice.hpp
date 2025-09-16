/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 12:58:39 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-10 12:58:39 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#  include "AMateria.hpp"

class Ice : public AMateria{
	public : 
		//Canonical
		Ice();
		Ice(const Ice& other);
		Ice&	operator=(const Ice& other);
		~Ice();

		//Member fonctions
		AMateria*	clone()const;
		void		use(ICharacter& target);

};

#endif