#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DEFAULT constructor for DI4MOND-TP being called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	this->Name = name;
	this->ClapTrap::Name += "_clap_name";
	std::cout << "Constructor for DI4MOND-TP " << this->Name <<  " being called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& to_copy)
{
	if (this != &to_copy)
		*this = to_copy;
	std::cout << "Copy constructor for DI4MOND-TP " << this->Name <<  " being called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& to_copy)
{
	if (this != &to_copy)
	{
		this->ClapTrap::Name = to_copy.Name;
		this->DiamondTrap::Name = to_copy.Name;
		this->AttackDamage = to_copy.AttackDamage;
		this->HitPoints = to_copy.HitPoints;
		this->EnergyPoints = to_copy.EnergyPoints;
	}
	std::cout << "Copy assignator for DI4MOND-TP " << this->Name <<  " being called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DI4MOND-TP " + this->getName() + " is getting disposed off" << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);

}

void DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
}


void DiamondTrap::whoAmI()
{
	std::cout << ClapTrap::Name << " " << this->getName() << std::endl;
}

std::string DiamondTrap::getName() const  {return this->DiamondTrap::Name;}