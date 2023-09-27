/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:24:20 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 13:14:48 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Implementation of the default constructor
ScavTrap::ScavTrap() { std::cout << "Default constructor of ScavTrap called" << std::endl; }

// Implemenatation of the paramterized constructor
ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    std::cout << "Parameterized constructor of ScavTrap called" << std::endl;
}

// Implementation of the copy constructor
ScavTrap::ScavTrap(ScavTrap const &old_obj): ClapTrap(old_obj)
{
    std::cout << "Copy constructor of ScavTrap called" << std::endl;
}

// Implementation of the copy assignment operator
ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
    return (*this);
}

// Implementation of the destructor
ScavTrap::~ScavTrap() { std::cout << "Destructor of ScavTrap called" << std::endl; }

// Implementation of the attack() function
void    ScavTrap::attack(const std::string &target)
{
    if (target.empty())
    {
        std::cout << "No target specified" << std::endl;
        return;
    }
    if (hit_points <= 0)
        std::cout << "The ScavTrap " << name << " Dead" << std::endl;
    else if (energy_points == 0)
        std::cout << "The ScavTrap " << name << " has no energy points left" << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " attacks " << target << \
        ", causing " << attack_damage << " points of damage" << std::endl;
        energy_points--;
    }
}

// Implementation of the guardGate() function
void    ScavTrap::guardGate()
{
    std::cout << "The ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}

