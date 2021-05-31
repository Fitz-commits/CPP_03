#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->HitPoint = 60;
	this->MaxHitPoint = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << "DEFAULT constructor for NINJ4-TP being called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 60;
	this->MaxHitPoint = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << *this << " is coming to life" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& to_copy)
{
	*this = to_copy;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& to_copy)
{
	if (this != &to_copy)
    {
        this->name = to_copy.name;
        this->HitPoint = to_copy.HitPoint;
        this->MaxHitPoint = to_copy.MaxHitPoint;
        this->EnergyPoints = to_copy.EnergyPoints;
        this->MaxEnergyPoints = to_copy.MaxEnergyPoints;
        this->level = to_copy.level;
        this->MeleeAttackDamage = to_copy.MeleeAttackDamage;
        this->RangedAttackDamage = to_copy.RangedAttackDamage;
        this->ArmorDamageReduction = to_copy.ArmorDamageReduction;
    }
    std::cout << "Assignation operator called on " << *this << std::endl;
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor operator called on " << *this << std::endl;
}

std::ostream & operator<<(std::ostream &out, NinjaTrap const& ct)
{
	out << "XXXX-TP " << ct.getName();
    return (out);
}

std::string NinjaTrap::getName() const
{
	return this->name;
}

void NinjaTrap::ninjaShoebox(FragTrap const& target)
{
	std::cout << target << " is getting ninjaed by " << *this << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& target)
{
	std::cout << target << " is getting his ass kiked by " << *this << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const& target)
{
	std::cout << *this << " is appearing in the back of " << target << " and destroyed it " << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& target)
{
	std::cout << *this << " is fighting a colleague and found himself not doing anything to "
	 << target << std::endl;
}

void NinjaTrap::ninjaShoebox(SuperTrap const& target)
{
	std::cout << *this << " Need more power in order to defeat " << target << std::endl;
}
