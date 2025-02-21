/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:11:31 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/20 16:32:44 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string Name) : name(Name), hit_pts(10), energy_pts(10), attack_dmg(0){std::cout  << "ClapTrap " << name << " entered the ring!!" << std::endl;}
ClapTrap::ClapTrap(void) : name("robot"), hit_pts(10), energy_pts(10), attack_dmg(0){std::cout  << "ClapTrap " << name << " entered the ring!!" << std::endl;}

//ClapTrap::~ClapTrap() {std::cout << "ClapTrap " << name << " is out of combat!!" << std::endl;}
ClapTrap::~ClapTrap() {std::cout << "ClapTrap " << name << " destructor called!" << std::endl;}/* {std::cout << "ClapTrap " << name << " is out of combat!!" << std::endl;} */

/* getters */
std::string ClapTrap::get_name() const {return (this->name);}
int ClapTrap::get_ad() const {return (this->attack_dmg);}
int ClapTrap::get_energy() const {return (this->energy_pts);}
int ClapTrap::get_hp() const {return (this->hit_pts);}

/* setters */
void ClapTrap::set_name(std::string Name) {this->name = Name;}
void ClapTrap::set_ad(int ad) {this->attack_dmg = ad;}
void ClapTrap::set_energy(int energy) {this->energy_pts = energy;}
void ClapTrap::set_hp(int hp) {this->hit_pts = hp;}

/* copy constructor  */

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

/* operator =  */

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->attack_dmg = other.attack_dmg;
		this->energy_pts = other.energy_pts;
		this->hit_pts = other.hit_pts;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& targe)
{// feito
	if (this->energy_pts == 0)
	{
		std::cout << name << " has no energy to attack!"<< std::endl;
		return ;
	}
	/* define msg que faz display do dano do ataque, a quem foi, e se a energia que sobra ao proprio   */
	std::cout << "ClapTrap " << name << " attacked "  << targe;
	std::cout << ", causing "  << attack_dmg << " points of damage!" << std::endl;
	this->energy_pts--;
}

void ClapTrap::takeDamage(unsigned int amout)
{
	std::cout << "ClapTrap " << name << " took " << amout  << " points of damage" << std::endl;
	this->hit_pts -= amout;
	if (this->hit_pts <= 0)
	{
		//~ClapTrap();
		 std::cout << "ClapTrap "  << name << " is exausted from the fight" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->name <<  " has left " << this->hit_pts << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amout)
{
	std::cout << "ClapTrap " << name << " repaired himself";
	std::cout << ", restauring "  << amout << " hit points!" << std::endl;
	this->hit_pts += amout;
	if (this->hit_pts > 10)
	{
		this->hit_pts = 10;
		std::cout << this->name << "is at full health!" << std::endl; 
	}
}
