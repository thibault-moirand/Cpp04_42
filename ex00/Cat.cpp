/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:26 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
    std::cout << "Cat " << this->type << " is created." << std::endl;
}

Cat::Cat( Cat const &src ): Animal( src )
{
	std::cout << "Cat: " << src.type << " has been copied and placed!" << std::endl;
	*this = src;
}

Cat::~Cat()
{
    std::cout << "Cat " << this->type << " is destroyed." << std::endl;
}

Cat &Cat::operator=( Cat const &src)
{
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}