/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();
		void makeSound() const;
		Dog &operator=( Dog const &src);
		std::string getIdeae(int index) const;
        void setIdeae(int index, const std::string &idea);
};

#endif