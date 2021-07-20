#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
 ClapTrap()
{
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	std::cout << "DEFAULT constructor SC4V-TP being called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	std::cout << "Constructor for SC4V-TP " + this->Name + " being called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& to_copy)
{
	if (this != &to_copy)
		*this = to_copy;
	std::cout << "Copy constructor called on FR4G-TP " << this->Name << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const& to_copy)
{
	if (this != &to_copy)
	{
		this->EnergyPoints = to_copy.EnergyPoints;
		this->HitPoints = to_copy.HitPoints;
		this->AttackDamage = to_copy.AttackDamage;
		this->Name = to_copy.Name;
	}
	std::cout << "Assignation operator called on SC4V-TP " << this->Name << std::endl;
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " + this->Name + " is thrown in the dumpser" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	std::cout << "SC4V-TP " + this->Name + " attacks " + target + " at range causing " 
		<< this->AttackDamage << " Point of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int hit_for;

    if (this->HitPoints - (int)amount < 0)
        hit_for = this->HitPoints;
    else
        hit_for = amount;
    this->HitPoints -= hit_for;
    std::cout << "SC4V-TP " + this->Name + " lost " << hit_for << 
	" hit points and has now (" << HP << ") HitPoints" << std::endl;

}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->HitPoints += amount;
	std::cout << "SC4V-TP " + this->Name + " is getting repaired for " 
	<< amount <<  " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "SC4V-TP " + this->Name + " is entering gate keeper mode" << std::endl;
}