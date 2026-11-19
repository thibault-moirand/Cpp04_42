/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "no type";
    std::cout << "Animal " << this->type << " is created." << std::endl;
}

Animal::Animal( Animal const &src )
{
	std::cout << "Animal: " << src.type << " has been copied and placed!" << std::endl;
	*this = src;
}

Animal::~Animal()
{
    std::cout << "Animal " << this->type << " is destroyed." << std::endl;
}

Animal &Animal::operator=( Animal const &src)
{
	this->type = src.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "bloug" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}