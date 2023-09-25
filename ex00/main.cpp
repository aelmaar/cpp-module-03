/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/25 14:52:31 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Anouar");
    
    claptrap.attack("Omar");
    claptrap.takeDamage(5);
    claptrap.beRepaired(2);
    claptrap.takeDamage(1);
    claptrap.beRepaired(2);
    claptrap.takeDamage(1);
    claptrap.beRepaired(2);
    claptrap.takeDamage(1);
    claptrap.beRepaired(2);
    claptrap.takeDamage(1);
    claptrap.beRepaired(2);
    claptrap.attack("Ayoub");
    claptrap.attack("Hamza");
    claptrap.beRepaired(2);
    claptrap.beRepaired(2);
    claptrap.takeDamage(4);
    claptrap.beRepaired(2);
    claptrap.takeDamage(100);
    claptrap.beRepaired(100);
    return (EXIT_SUCCESS);
}