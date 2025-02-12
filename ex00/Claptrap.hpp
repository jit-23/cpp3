#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class Claptrap{

	private:
		std::string name;
		int hit_pts;
		int energy_pts;
		int attack_dmg;
	public:
		Claptrap(std::string name);
		~Claptrap();
		/*  */
		void attack(const std::string& targe);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

Claptrap::Claptrap(std::string Name) : name(Name), hit_pts(10), energy_pts(10), attack_dmg(0){std::cout << name << " entered the ring!!" << std::endl;}

Claptrap::~Claptrap()
{
	std::cout << name << " is out of combat!!" << std::endl;
}

/* copy constr
	copy operator
	setter e getter xdddddddd
	 */

void Claptrap::attack(const std::string& targe)
{// feito
	if (this->energy_pts == 0)
	{
		std::cout << name << " has no energy to attack!"<< std::endl;
		return ;
	}
	/* define msg que faz display do dano do ataque, a quem foi, e se a energia que sobra ao proprio   */
	std::cout << "Claptrap " << name << " attacked "  << targe;
	std::cout << ", causing "  << attack_dmg << " points of damage!" << std::endl;
	this->energy_pts--;
}

void Claptrap::takeDamage(unsigned int amout)
{
	std::cout << "Claptrap " << name << " took " << amout  << " points of damage";
	this->hit_pts -= amout;
	if (this->hit_pts <= 0)
	{
		//~Claptrap();
		 std::cout << name << "is exausted from the fight" << std::endl; 
	}
	else
		std::cout << this->name <<  " has left " << this->hit_pts << "hit points" << std::endl;
}

void Claptrap::beRepaired(unsigned int amout)
{
	std::cout << "Claptrap " << name << " repaired himself ";
	std::cout << ", restauring "  << amout << " hit points!" << std::endl;
	this->hit_pts += amout;
	if (this->hit_pts > 10)
	{
		this->hit_pts = 10;
		std::cout << this->name << "is at full health!" << std::endl; 
	}
	
}



#endif