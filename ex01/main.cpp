/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 13:17:03 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap_dfl;
    ScavTrap scavtrap("Anouar");
    ScavTrap scavtrap2 = scavtrap;
    
    scavtrap_dfl = scavtrap2;
    std::cout << "-----------------------------------------" << std::endl;
    for (int i = 0; i < 25; i++)
    {
        scavtrap.attack("Ayoub");
        scavtrap.takeDamage(40);
        scavtrap.beRepaired(40);
    }
    scavtrap.attack("Omar");
    scavtrap.guardGate();
    scavtrap.takeDamage(100);
    scavtrap.attack("Omar");
    return (EXIT_SUCCESS);
}
