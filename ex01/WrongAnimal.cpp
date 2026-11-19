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

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "no type";
    std::cout << "WrongAnimal " << this->type << " is created." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << "WrongAnimal: " << src.type << " has been copied and placed!" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal " << this->type << " is destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &src)
{
	this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "bloug" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}