#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Arg Constructure has been worked and variables are initilized\n";
	setName(name);
	setHitPoints(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap& other) {
	std::cout << "ScavTrap Copy Constructure has been worked\n";
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other) {
	std::cout << "ScavTrap Copy Assignment has been worked and variables are initilized\n";
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoint(other.getEnergyPoint());
	setAttackDamage(other.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructure has been worked\n";
}

void ScavTrap::attack(std::string target) {
	if (getHitPoints() <= 0 || getEnergyPoint() <= 0) {
		std::cout << "Could not attack because not enough point\n";
		return;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!\n";
	setEnergyPoint(getEnergyPoint() - 1);
}

void ScavTrap::guardGate() {
	std::cout << getName() << " is now in Gate keeper mode." << std::endl;
}
