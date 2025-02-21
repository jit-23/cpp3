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
		ClapTrap(std::string Name);
		ClapTrap(void);
		ClapTrap(ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& targe);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string get_name()const;
		int get_ad()const;
		int get_energy()const;
		int get_hp()const;

		void set_name(std::string Name);
		void set_ad(int ad);
		void set_energy(int energy);	
		void set_hp(int hp);

};


#endif