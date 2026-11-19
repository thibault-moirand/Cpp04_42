/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:24 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();
		void makeSound() const;
		Cat &operator=( Cat const &src);
        std::string getIdeae(int index) const;
        void setIdeae(int index, const std::string &idea);
};

#endif