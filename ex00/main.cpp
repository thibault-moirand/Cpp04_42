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

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main () {
    // Tests avec les classes Animal, Dog et Cat
    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << std::endl << "\"ANIMAL\" TESTS:" << std::endl;
    std::cout << "Animal type: " << animal->getType() << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound();  // "Ouaf"
    cat->makeSound();  // "Miaou"
    animal->makeSound();  // "bloug" (méthode de Animal, car ce n'est pas un son spécifique)

    std::cout << std::endl << std::endl;

    // Tests avec les classes WrongAnimal et WrongCat (sans polymorphisme)
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << std::endl << "\"WRONG ANIMAL\" TESTS:" << std::endl;
    std::cout << "WrongAnimal type: " << wrongAnimal->getType() << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

    wrongAnimal->makeSound();  // Affiche "bloug" de WrongAnimal
    wrongCat->makeSound();     // Affiche "bloug" de WrongAnimal, pas le son spécifique de WrongCat

    std::cout << std::endl;

    // Libération de la mémoire
    delete animal;
    delete dog;
    delete cat;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
