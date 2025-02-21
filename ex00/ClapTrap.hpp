#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class ClapTrap{

	private:
		std::string name;
		int hit_pts;
		int energy_pts;
		int attack_dmg;
	public:
		ClapTrap(std::string name);
		ClapTrap(void);
		ClapTrap(ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& targe);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int get_ad();
		int get_energy();
		int get_hp();

		void set_ad(int ad);
		void set_energy(int energy);	
		void set_hp(int hp);

};


#endif