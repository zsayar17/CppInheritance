#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructure has been worked and variables are initilized\n";
	setHitPoints(this->getBeginHitPoint());
	setEnergyPoint(this->getBeginEnergyPoint());
	setAttackDamage(this->getBeginAttackDamage());
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

/*void FragTrap::attack(std::string target) {
	if (getHitPoints() <= 0 || getEnergyPoint() <= 0) {
		std::cout << "Could not attack because not enough point\n";
		return;
	}
	std::cout << "FragTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!\n";
	setEnergyPoint(getEnergyPoint() - 1);
}*/

int FragTrap::getBeginHitPoint() const {
	return (100);
}

int FragTrap::getBeginEnergyPoint() const {
	return (100);
}

int FragTrap::getBeginAttackDamage() const {
	return (30);
}

