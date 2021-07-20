#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
EnergyPoints(10),
HitPoints(10),
AttackDamage(0)
{
}

ClapTrap::ClapTrap(std::string name) : 
Name(name),
EnergyPoints(10),
HitPoints(10),
AttackDamage(0)
{
	std::cout << "Constructor for CL4P-TP " + this->Name + " being called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& to_copy)
{
	if (this != &to_copy)
		*this = to_copy;
	std::cout << "Copy constructor called on " << "CL4P-TP " << this->Name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& to_copy)
{
	if (this != &to_copy)
	{
		this->AttackDamage = to_copy.AttackDamage;
		this->EnergyPoints = to_copy.EnergyPoints;
		this->HitPoints = to_copy.HitPoints;
		this->Name = to_copy.Name;
	}
	std::cout << "Assignation operator called on CL4P-TP " << this->Name << std::endl;
	return (*this);

}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for CL4P-TP " + this->Name + " being called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "CL4P-TP " + this->Name + " attacks " + target + " at range causing " 
		<< this->AttackDamage << " Point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int hit_for;

    if (this->HitPoints - (int)amount < 0)
        hit_for = this->HitPoints;
    else
        hit_for = amount;
    this->HitPoints -= hit_for;
    std::cout << "CL4P-TP " + this->Name + " lost " << hit_for << 
	" hit points and has now (" << HP << ") HitPoints" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->HitPoints += amount;
	std::cout << "CL4P-TP " + this->Name + " is getting repaired for " 
	<< amount <<  " hit points and has now (" << HP << ") HitPoint" << std::endl;
}