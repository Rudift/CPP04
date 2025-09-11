/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 12:59:16 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-10 12:59:16 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#  include "AMateria.hpp"

	class Cure : public AMateria{
		public:
			//Canonical
			Cure(std::string const & type);
			Cure(const Cure& other);
			Cure&	operator=(const Cure& other);
			~Cure();

			//Member fonctions
			virtual AMateria* clone()const;
	};
#endif