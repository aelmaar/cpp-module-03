/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 14:02:04 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragtrap_dfl;
    FragTrap fragtrap("Anouar");
    FragTrap fragtrap2 = fragtrap;

    fragtrap_dfl = fragtrap2;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < 50; i++)
    {
        fragtrap.attack("Ayoub");
        fragtrap.takeDamage(40);
        fragtrap.beRepaired(40);
    }
    fragtrap.attack("Omar");
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(100);
    fragtrap.attack("Omar");
    return (EXIT_SUCCESS);
}
