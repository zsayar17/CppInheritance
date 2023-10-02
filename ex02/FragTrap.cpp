#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Arg Constructure has been worked and variables are initilized\n";
	setHitPoints(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	setName(name);
}


FragTrap::FragTrap(FragTrap& other) {
	std::cout << "FragTrap Copy Constructure has been worked\n";
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructure has been worked\n";
}

FragTrap& FragTrap::operator=(FragTrap& other) {
	std::cout << "FragTrap Copy Assignment has been worked and variables are initilized\n";
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoint(other.getEnergyPoint());
	setAttackDamage(other.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << getName() << ": High Five Guysssssss\n";
}
