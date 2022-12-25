/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:24:19 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/25 19:36:13 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &origin);
    DiamondTrap &operator=(const DiamondTrap &origin);
    ~DiamondTrap();
    void whoAmI() const;
    int getHP() const;
    int getEP() const;
    int getAD() const;
};

std::ostream &operator<<(std::ostream &os, const DiamondTrap &t);

#endif
