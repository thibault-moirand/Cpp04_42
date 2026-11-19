/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:04:51 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 13:04:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();
		Brain &operator=( Brain const &src);
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};

#endif