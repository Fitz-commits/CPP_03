#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->MaxHitPoint = FragTrap::MaxHitPoint;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoints = NinjaTrap::EnergyPoints;
	this->MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	this->level = 1;
	this->MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	this->RangedAttackDamage = FragTrap::RangedAttackDamage;
	this->ArmorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << "DEFAULT constructor called for SUPER-TP" << std::endl;
}
SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	this->MaxHitPoint = FragTrap::MaxHitPoint;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoints = NinjaTrap::EnergyPoints;
	this->MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	this->level = 1;
	this->MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	this->RangedAttackDamage = FragTrap::RangedAttackDamage;
	this->ArmorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << *this << " coming to life" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& to_copy)
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
    std::cout << "Copy constructor called on " << *this << std::endl;
}
SuperTrap& SuperTrap::operator=(SuperTrap const& to_copy)
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
SuperTrap::~SuperTrap()
{
	
}

std::ostream & operator<<(std::ostream &out, SuperTrap const &ct)
{
	out << "SUPER-TP " + ct.getName();
    return (out);
}


void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
