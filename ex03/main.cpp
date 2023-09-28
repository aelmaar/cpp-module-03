/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/28 16:11:11 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamondtrap_dfl;
    DiamondTrap diamondtrap("Anouar");
    DiamondTrap diamondtrap2 = diamondtrap_dfl;

    diamondtrap_dfl = diamondtrap2;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < 50; i++)
    {
        diamondtrap.ScavTrap::attack("Ayoub");
        diamondtrap.takeDamage(40);
        diamondtrap.beRepaired(40);
    }
    diamondtrap.ScavTrap::attack("Omar");
    diamondtrap.whoAmI();
    diamondtrap.FragTrap::takeDamage(100);
    diamondtrap.ScavTrap::attack("Omar");
    return (EXIT_SUCCESS);
}
