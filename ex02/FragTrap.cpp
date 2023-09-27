/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:51:16 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 16:46:54 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Implementation of the default constructor
FragTrap::FragTrap() { std::cout << "Default constructor of FragTrap called" << std::endl; }

// Implementation of the paramterize constructor
FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
    std::cout << "Parameterized constructor of FragTrap called" << std::endl;
}

// Implementation of the copy constructor
FragTrap::FragTrap(FragTrap const &old_obj): ClapTrap(old_obj) {
    std::cout << "Copy constructor of FragTrap called" << std::endl;
}

// Implementation of the copy assignment operator
FragTrap &FragTrap::operator=(FragTrap const &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of FragTrap called" << std::endl;
    return (*this);
}

// Implementation of the destructor
FragTrap::~FragTrap() { std::cout << "Destructor of FragTrap called" << std::endl; }

// Implementation of the highFivesGuys() function
void    FragTrap::highFivesGuys() {
    std::cout << "High five request" << std::endl;
}

// Implementation of the attack() function
void    FragTrap::attack(const std::string &target)
{
    if (target.empty())
    {
        std::cout << "No target specified" << std::endl;
        return;
    }
    if (hit_points <= 0)
        std::cout << "The FragTrap " << name << " Dead" << std::endl;
    else if (energy_points == 0)
        std::cout << "The FragTrap " << name << " has no energy points left" << std::endl;
    else
    {
        std::cout << "FragTrap " << name << " attacks " << target << \
        ", causing " << attack_damage << " points of damage" << std::endl;
        energy_points--;
    }
}
