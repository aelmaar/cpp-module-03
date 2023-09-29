/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:03:40 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/29 15:18:08 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(DiamondTrap const &old_obj);
        DiamondTrap &operator=(DiamondTrap const &other);
        ~DiamondTrap();
        void whoAmI();
        void attack(const std::string& target);
};

#endif
