/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:27 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 10:29:27 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Implementation of the default constructor
ClapTrap::ClapTrap(): name("Unknown"), hit_points(100), energy_points(100), attack_damage(30) {std::cout << "Default constructor of ClapTrap called" << std::endl;}

// Implementation of the parameterized constructor
ClapTrap::ClapTrap(const std::string &name): name(name), hit_points(100), energy_points(100), attack_damage(30) {
    std::cout << "Parameterized constructor of ClapTrap called" << std::endl;
}

// Implementation of the copy constructor
ClapTrap::ClapTrap(ClapTrap const &old_obj)
{
    this->name = old_obj.name;
    this->hit_points = old_obj.hit_points;
    this->attack_damage = old_obj.attack_damage;
    this->energy_points = old_obj.energy_points;
    std::cout << "Copy constructor of ClapTrap called" << std::endl;
}

// Implementation of the copy assignment operator
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->attack_damage = other.attack_damage;
        this->energy_points = other.energy_points;
    }
    std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
    return (*this);
}

// Implementation of the destructor
ClapTrap::~ClapTrap() {
    std::cout << "Destructor of ClapTrap called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (target.empty())
    {
        std::cout << "No target specified" << std::endl;
        return;
    }
    if (hit_points <= 0)
        std::cout << "The ClapTrap " << name << " Dead" << std::endl;
    else if (energy_points == 0)
        std::cout << name << " has no energy points left" << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target << \
        ", causing " << attack_damage << " points of damage" << std::endl;
        energy_points--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
    {
        std::cout << "The ClapTrap " << name << " Dead" << std::endl;
        return;
    }
    hit_points -= amount;
    std::cout << "The ClapTrap take damage of " << amount << " amount." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "The ClapTrap " << name << " Dead" << std::endl;
    else if (energy_points == 0)
        std::cout << name << " has no energy points left" << std::endl;
    else
    {
        std::cout << "The ClapTrap repaired with " << amount << " amount." << std::endl;
        hit_points += amount;
        energy_points--; 
    }
}

