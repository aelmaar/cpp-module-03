/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:03:37 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/28 16:07:06 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Implementation of the default constructor
DiamondTrap::DiamondTrap() { std::cout << "Default constructor of DiamondTrap called" << std::endl; }

// Implementation of the parameterized constructor
DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), name(name) {
    std::cout << "Parameterized constructor of DiamondTrap called" << std::endl;
}

// Implementation of the copy constructor
DiamondTrap::DiamondTrap(DiamondTrap const &old_obj): ClapTrap(old_obj) {
    std::cout << "Copy constructor of DiamonTrap called" << std::endl;
}

// Implementation of the copy assignment operator
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
    return (*this);
}

// Implementation of the destructor
DiamondTrap::~DiamondTrap() { std::cout << "Destructor of DiamondTrap called" << std::endl; }

// Implementation of the whoAmI() function
void    DiamondTrap::whoAmI() {
    std::cout << "My DiamondTrap name: " << name << " and my ClapTrap name: " << ClapTrap::name << std::endl;
}
