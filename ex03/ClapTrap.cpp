#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(10);
	setEnergyPoint(10);
	setAttackDamage(0);
	setName("Default");
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Arg Constructure has been worked and variables are initilized\n";
	setHitPoints(10);
	setEnergyPoint(10);
	setAttackDamage(0);
	setName(name);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructure has been worked\n";
}

ClapTrap::ClapTrap(ClapTrap& other) {
	std::cout << "ClapTrap Copy Constructure has been worked\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other) {
	std::cout << "ClapTrap Copy Assignment has been worked and variables are initilized\n";
	setHitPoints(other.getAttackDamage());
	setEnergyPoint(other.getEnergyPoint());
	setAttackDamage( other.getHitPoints());
	setName(other.getName());
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

void ClapTrap::setAttackDamage(int amount) {
	_attackdamage = amount;
}

void ClapTrap::setEnergyPoint(int amount) {
	_energypoints = amount;
}

void ClapTrap::setHitPoints(int amount) {
	_hitpoints = amount;
}

void ClapTrap::setName(std::string name) {
	_name = name;
}

