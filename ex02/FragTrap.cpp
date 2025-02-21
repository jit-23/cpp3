/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 03:44:09 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/21 03:44:26 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("robot"){
	set_hp(100);
	set_energy(100);
	set_ad(30);
	std::cout << "FlagTrap "<< get_name() << " construtor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	set_hp(100);
	set_energy(100);
	set_ad(30);
	std::cout << "FlagTrap "<< get_name() << " construtor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other){
	*this = other;
	//set_hp(other.get_hp);
	//set_energy(100);
	//set_ad(30);
	std::cout << "FlagTrap "<< get_name() << " construtor called" << std::endl;
}
/* destructor */
FragTrap::~FragTrap()
{
	std::cout << "FlagTrap "<< get_name() << " destructor called" << std::endl;

}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << get_name() << " is asking for a high five!!" <<  std::endl;
}