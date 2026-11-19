/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:32 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	this->brain = new Brain();
	this->type = "Dog";
    std::cout << "Dog " << this->type << " is created." << std::endl;
}

Dog::Dog( Dog const &src ): Animal( src )
{
	std::cout << "Dog: " << src.type << " has been copied and placed!" << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Dog::~Dog()
{
	delete this->brain;
    std::cout << "Dog " << this->type << " is destroyed." << std::endl;
}

Dog &Dog::operator=( Dog const &src)
{
	delete this->brain; 
	this->brain = new Brain(*src.brain);
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}

std::string Dog::getIdeae(int index) const
{
	return this->brain->getIdea(index);
}

void Dog::setIdeae(int index, const std::string &idea)
{
	this->brain->setIdea(index, idea);
}