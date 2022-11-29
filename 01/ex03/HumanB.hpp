/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:45:50 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 11:26:58 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
private:
	std::string name;
	Weapon weapon;

public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon weapon);
};

#endif
