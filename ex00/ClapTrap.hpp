#pragma once

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {

	private:
		std::string _name;
		int	_hitpoints;
		int	_energypoints;
		int	_attackdamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap& other);
		ClapTrap& operator=(ClapTrap& other);


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttackDamage() const;
		int getEnergyPoint() const;
		int getHitPoints() const;
		std::string getName() const;
};

#endif
