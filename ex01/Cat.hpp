/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-08 11:51:42 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-08 11:51:42 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
	class Cat : public Animal{
		public :
			//Canonical
			Cat(void);
			Cat(const Cat& other);
			Cat& operator=(const Cat& other);
			~Cat();
		private :
			Brain	*_brain;
	};
#endif
