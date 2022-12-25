/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:24:17 by rtakano           #+#    #+#             */
/*   Updated: 2022/12/25 19:36:05 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->name = "null";
    this->ClapTrap::name = "null_clap_name";
    this->energy_point = 50;
    std::cout << "DiamondTrap constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name){
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->energy_point = 50;
    std::cout << "DiamondTrap constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin)  : ClapTrap(origin), ScavTrap(origin), FragTrap(origin) {
    this->name = origin.name;
    this->ClapTrap::name = origin.ClapTrap::name;
    this->attack_damage = origin.attack_damage;
    this->energy_point = origin.energy_point;
    this->hit_point = origin.hit_point;
    std::cout << "DiamondTrap copy constructor is called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &origin) {
    this->name = origin.name;
    this->ClapTrap::name = origin.ClapTrap::name;
    this->attack_damage = origin.attack_damage;
    this->energy_point = origin.energy_point;
    this->hit_point = origin.hit_point;
    std::cout << "DiamondTrap copy operator is called." << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor is called." << std::endl;
}

void DiamondTrap::whoAmI() const {
    std::cout << "DiamondTrap name:" << this->name << " ClapTrap name:" << this->ClapTrap::name << std::endl;
}

int DiamondTrap::getHP() const {
    return this->hit_point;
}

int DiamondTrap::getEP() const {
    return this->energy_point;
}

int DiamondTrap::getAD() const {
    return this->attack_damage;
}

std::ostream &operator<<(std::ostream &os, const DiamondTrap &t) {
    os << t.getHP() << " " << t.getEP() << " " << t.getAD();
    return os;
}
