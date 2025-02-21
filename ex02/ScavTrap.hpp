/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:02:17 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/20 16:37:22 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstring>
#include <cctype>

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(void);
	ScavTrap(ScavTrap& other);
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &other);
	
	void guardGate();
};

ScavTrap::ScavTrap(void) : ClapTrap("robot")
{ 
	set_hp(100);//hit_pts = 100;
	set_energy(500);//this->energy_pts = 50;
	set_ad(20);//this->attack_dmg = 20;
	std::cout  << "ScavTrap " << get_name() << " constructor called" << std::endl;

} /* , hit_pts(100), energy_pts(50), attack_dmg(20){ */

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name){
	set_hp(100);//hit_pts = 100;
	set_energy(500);//this->energy_pts = 50;
	set_ad(20);//this->attack_dmg = 20;
	std::cout << "ScavTrap " << get_name() << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{
	std::cout  << "ScavTrap copy constructor called" << std::endl;	
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignment copy operator called" << std::endl;
	if(this != &other)
	{
		set_name(other.get_name());
		set_hp(other.get_hp());//hit_pts = 100;
		set_energy(other.get_energy());//this->energy_pts = 50;
		set_ad(other.get_ad());//this->attack_dmg = 20;

//		set_name(other.name);
//		set_hp(other.hit_pts);//hit_pts = 100;
//		set_energy(other.energy_pts);//this->energy_pts = 50;
//		set_ad(other.ad);//this->attack_dmg = 20;
		
		/* this->name = other.name;
		this->attack_dmg = other.attack_dmg;
		this->energy_pts = other.energy_pts;
		this->hit_pts = other.hit_pts; */
	}
	return (*this);
}

ScavTrap::~ScavTrap()  {std::cout << "ScavTrap " << get_name() <<  " destructor called" << std::endl;}

void ScavTrap::guardGate(){std::cout << "ScavTrap "  <<  this->get_name() << " is now in Gate keeper mode" << std::endl;}

#endif