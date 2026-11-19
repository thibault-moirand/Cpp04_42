/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <sstream>
#include <cmath>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
		Animal &operator=( Animal const &src);
};

#endif