/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 09:16:51 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 09:16:51 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#  include <string>
#  include <iostream>
#  include "Colors.hpp"

	class Brain{
		public :
			std::string	ideas[100];

			//Canonical
			Brain(void);
			Brain(const Brain& other);
			Brain&	operator=(const Brain& other);
			virtual ~Brain(void);
	};

#endif