/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 08:55:13 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-09 08:55:13 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
	class WrongCat : public WrongAnimal{
		public :
			//Canonical
			WrongCat(void);
			WrongCat(const WrongCat& other);
			WrongCat& operator=(const WrongCat& other);
			~WrongCat();
	};
#endif
