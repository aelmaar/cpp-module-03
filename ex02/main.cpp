/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:42:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/27 12:36:49 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragtrap("Anouar");

    for (int i = 0; i < 50; i++)
    {
        fragtrap.attack("Ayoub");
        fragtrap.takeDamage(40);
        fragtrap.beRepaired(40);
    }
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(100);
    fragtrap.attack("Omar");
    return (EXIT_SUCCESS);
}
