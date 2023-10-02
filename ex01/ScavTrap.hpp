#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& other);
		ScavTrap& operator=(ScavTrap& other);
		~ScavTrap();

		void attack(std::string target);
		void guardGate();
};

#endif
