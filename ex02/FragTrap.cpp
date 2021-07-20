#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->HitPoints = 100;
	std::cout << "DEFAULT constructor FR4G-TP being called" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->HitPoints = 100;
	std::cout << "Constructor for FR4G-TP " + this->Name + " being called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& to_copy)
{
	if (this != &to_copy)
		*this = to_copy;
	std::cout << "Copy constructor called on FR4G-TP " << this->Name << std::endl;
}
FragTrap& FragTrap::operator=(FragTrap const& to_copy)
{
	if (this != &to_copy)
	{
		this->EnergyPoints = to_copy.EnergyPoints;
		this->HitPoints = to_copy.HitPoints;
		this->AttackDamage = to_copy.AttackDamage;
		this->Name = to_copy.Name;
	}
	std::cout << "Assignation operator called on FR4G-TP " << this->Name << std::endl;
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " + this->Name + " is now out of business" << std::endl;
}

void FragTrap::attack(std::string const& target)
{
	std::cout << "FR4G-TP " + this->Name + " attacks " + target + " at range causing " 
		<< this->AttackDamage << " Point of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int hit_for;

    if (this->HitPoints - (int)amount < 0)
        hit_for = this->HitPoints;
    else
        hit_for = amount;
    this->HitPoints -= hit_for;
    std::cout << "FR4G-TP " + this->Name + " lost " << hit_for << 
	" hit points and has now (" << HP << ") HitPoints" << std::endl;

}

void FragTrap::beRepaired(unsigned int amount)
{
	this->HitPoints += amount;
	std::cout << "FR4G-TP " + this->Name + " is getting repaired for " 
	<< amount <<  " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FR4G-TP " + this->Name + " is happy to give you five !" << std::endl; 
}
