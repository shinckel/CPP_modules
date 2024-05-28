/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:56:35 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:56:47 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "";
	std::cout << "AAnimal constructed" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructed" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copia)
{
	type = copia.type;
	std::cout << "AAnimal copied" << std::endl;
	return (*this);
}

AAnimal::AAnimal(const AAnimal &copia)
{
	*this = copia;
}

void	AAnimal::makeSound() const
{
	std::cout << "(generic Aanimal sound)" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}
