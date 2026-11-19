/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:39 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:25:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {

    //Animal ken;
    std::cout << "\n---- Test Création d'Animaux ----\n";
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\n---- Test des Sons ----\n";
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n---- Test des Idées de Brain ----\n";
    Dog* dogCopy = const_cast<Dog*>(dynamic_cast<const Dog*>(dog));
    Cat* catCopy = const_cast<Cat*>(dynamic_cast<const Cat*>(cat));

    dogCopy->setIdeae(0, "Chasser des bâtons");
    catCopy->setIdeae(0, "Attraper des souris");

    std::cout << "Dog Brain Idea: " << dogCopy->getIdeae(0) << std::endl;
    std::cout << "Cat Brain Idea: " << catCopy->getIdeae(0) << std::endl;

    std::cout << "\n---- Test Copie Profonde ----\n";
    Dog* dog2 = new Dog(*dogCopy);
    Cat* cat2 = new Cat(*catCopy);

    std::cout << "Dog2 Brain Idea (copie): " << dog2->getIdeae(0) << std::endl;
    std::cout << "Cat2 Brain Idea (copie): " << cat2->getIdeae(0) << std::endl;

    std::cout << "\n---- Suppression des Animaux ----\n";
    delete dog;
    delete cat;
    delete dog2;
    delete cat2;

    std::cout << "\n---- Test avec Tableau d'Animaux ----\n";
    Animal* animals[6];

    for (int i = 0; i < 3; ++i) {
        animals[i] = new Dog();
        animals[i + 3] = new Cat();
    }

    for (int i = 0; i < 6; ++i)
    {
        animals[i]->makeSound();
    }

    std::cout << "\n---- Suppression du Tableau ----\n";
    for (int i = 0; i < 6; ++i)
    {
        delete animals[i];
    }

    return 0;
}
