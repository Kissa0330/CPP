/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:47:15 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/29 11:18:41 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
	std::string name;
	Weapon weapon;

public:
	HumanA(std::string name, Weapon weapon);
	~HumanA(void);
	void attack(void);
	void setWeapon(Weapon weapon);
};

#endif
