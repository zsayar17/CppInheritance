#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(FragTrap::getBeginHitPoint());
	setEnergyPoint(ScavTrap::getBeginEnergyPoint());
	setAttackDamage(FragTrap::getBeginAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap Arg Constructure has been worked and variables are initilized\n";
	this->_name = name;
	setHitPoints(FragTrap::getBeginHitPoint());
	setEnergyPoint(ScavTrap::getBeginEnergyPoint());
	setAttackDamage(FragTrap::getBeginAttackDamage());
}

DiamondTrap::DiamondTrap(DiamondTrap& other) {
	std::cout << "DiamondTrap Copy Constructure has been worked\n";
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other) {
	std::cout << "DiamondTrap Copy Assignment has been worked and variables are initilized\n";
	_name = other._name;
	setName(this->_name + other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoint(other.getHitPoints());
	setAttackDamage(other.getHitPoints());
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructure has been worked\n";
}

void DiamondTrap::whoAmI() {
	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
	" and i am originated from the ClapTrap named " << ClapTrap::getName() << "." <<
	std::endl;
}


