#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& other);
		~FragTrap();
		FragTrap& operator=(FragTrap& other);

		void highFivesGuys(void);
};

#endif
