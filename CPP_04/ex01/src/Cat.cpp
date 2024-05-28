/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:53:51 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:53:53 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
	brain = new Brain;
}

Cat &Cat::operator=(const Cat &copia)
{
	type = copia.type;
	std::cout << "Cat copied";
	*brain = *copia.brain;
	return (*this);
}

Cat::Cat(const Cat &copia) : Animal()
{
	*this = copia;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
