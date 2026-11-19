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

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
    std::cout << "WrongCat " << this->type << " is created." << std::endl;
}

WrongCat::WrongCat( WrongCat const &src ): WrongAnimal( src )
{
	std::cout << "WrongCat: " << src.type << " has been copied and placed!" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat " << this->type << " is destroyed." << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &src)
{
	this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
}
