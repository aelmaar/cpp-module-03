/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:51:16 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 12:04:38 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Implementation of the default constructor
FragTrap::FragTrap() { std::cout << "Default constructor of FragTrap called" << std::endl; }

// Implementation of the paramterize constructor
FragTrap::FragTrap(const std::string &name): ClapTrap(name) {}

// Implementation of the copy constructor
FragTrap::FragTrap(FragTrap const &old_obj) {
    (void)old_obj;
    std::cout << "Copy constructor of FragTrap called" << std::endl;
}

// Implementation of the copy assignment operator
FragTrap &FragTrap::operator=(FragTrap const &other) {
    (void)other;
    std::cout << "Copy assignment operator of FragTrap called" << std::endl;
    return (*this);
}

// Implementation of the destructor
FragTrap::~FragTrap() { std::cout << "Destructor of ScavTrap called" << std::endl; }

// Implementation of the highFivesGuys() function
void    FragTrap::highFivesGuys() {
    std::cout << "High five request" << std::endl;
}
