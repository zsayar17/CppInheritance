#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& other);
		~FragTrap();
		FragTrap& operator=(FragTrap& other);

		void highFivesGuys(void);
		//void attack(std::string target);
		int getBeginHitPoint() const;
		int getBeginEnergyPoint() const;
		int getBeginAttackDamage() const;
};

#endif
