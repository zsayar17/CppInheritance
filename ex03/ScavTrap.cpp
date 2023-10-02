#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(this->getBeginHitPoint());
	setEnergyPoint(this->getBeginEnergyPoint());
	setAttackDamage(this->getBeginAttackDamage());
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Arg Constructure has been worked and variables are initilized\n";
	setName(name);
	setHitPoints(this->getBeginHitPoint());
	setEnergyPoint(this->getBeginEnergyPoint());
	setAttackDamage(this->getBeginAttackDamage());
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

int ScavTrap::getBeginHitPoint() const {
	return (100);
}

int ScavTrap::getBeginEnergyPoint() const {
	return (50);
}

int ScavTrap::getBeginAttackDamage() const {
	return (20);
}
