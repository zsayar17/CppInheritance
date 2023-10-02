#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructure has been worked and variables are initilized\n";
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
	_name = "default";
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Arg Constructure has been worked and variables are initilized\n";
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
	_name = name;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructure has been worked\n";
}

ClapTrap::ClapTrap(ClapTrap& other) {
	std::cout << "Copy Constructure has been worked\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other) {
	std::cout << "Copy Assignment has been worked and variables are initilized\n";
	this->_attackdamage = other.getAttackDamage();
	this->_energypoints = other.getEnergyPoint();
	this->_hitpoints = other.getHitPoints();
	this->_name = other.getName();
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (getHitPoints() <= 0 || getEnergyPoint() <= 0) {
		std::cout << "Could not attacked\n";
		return;
	}
	std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!\n";
	_energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0 || getEnergyPoint() <= 0) {
		std::cout << "Could not took damage\n";
		return;
	}
	std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!\n";
	_hitpoints -= amount;
	if (_hitpoints <= 0) std::cout << "ClapTrap " << getName() << " is death\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getHitPoints() <= 0 || getEnergyPoint() <= 0) {
		std::cout << "Could not repaired\n";
		return;
	}
	std::cout << "ClapTrap " << getName() << " repairs " << amount << " points of hit point!\n";
	_hitpoints += amount;
	_energypoints--;
}

int ClapTrap::getAttackDamage() const {
	return (_attackdamage);
}

int ClapTrap::getEnergyPoint() const {
	return (_energypoints);
}

int ClapTrap::getHitPoints() const {
	return (_hitpoints);
}

std::string ClapTrap::getName() const {
	return (_name);
}
