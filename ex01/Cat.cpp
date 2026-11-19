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
	this->brain = new Brain();
	this->type = "Cat";
    std::cout << "Cat " << this->type << " is created." << std::endl;
}

Cat::Cat( Cat const &src ): Animal( src )
{
	std::cout << "Cat: " << src.type << " has been copied and placed!" << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat " << this->type << " is destroyed." << std::endl;
}

Cat &Cat::operator=( Cat const &src)
{
	delete this->brain; 
	this->brain = new Brain(*src.brain);
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

std::string Cat::getIdeae(int index) const
{
	return this->brain->getIdea(index);
}

void Cat::setIdeae(int index, const std::string &idea)
{
	this->brain->setIdea(index, idea);
}