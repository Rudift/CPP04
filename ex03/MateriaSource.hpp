/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-16 08:41:28 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-16 08:41:28 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource
{
	private :
		AMateria*	_grimoire[4];
	public :
		//Canonical
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
		~MateriaSource();

		//Member fonction
		void		learnMateria(AMateria* m_to_learn);
		AMateria*	createMateria(std::string const & type);
};

