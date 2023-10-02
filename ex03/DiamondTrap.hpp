#pragma once

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& other);
		DiamondTrap& operator=(DiamondTrap& other);
		~DiamondTrap();

		void whoAmI();
};

#endif
