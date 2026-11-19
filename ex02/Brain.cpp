/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:04:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 13:04:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain " << " is created." << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain " << " is created." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain "<< " is destroyed." << std::endl;
}

Brain &Brain::operator=( Brain const &src )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return *this;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas[index];
    return "";
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}