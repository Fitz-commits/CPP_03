#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 50;
    this->MaxEnergyPoints = 50;
    this->level = 1;
    this->MeleeAttackDamage = 20;
    this->RangedAttackDamage = 15;
    this->ArmorDamageReduction = 3;
    std::cout << "DEFAULT constructor SC4V-TP being called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
 	this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 50;
    this->MaxEnergyPoints = 50;
    this->level = 1;
    this->MeleeAttackDamage = 20;
    this->RangedAttackDamage = 15;
    this->ArmorDamageReduction = 3;
    std::cout << *this << " coming to life" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& to_copy) : ClapTrap(to_copy.name)
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

ScavTrap& ScavTrap::operator=(ScavTrap const& to_copy)
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

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP " + this->name + " is thrown in the dumpser" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    int nbr;

    std::string new_challenges[5] = {"In order to get in you need to get in !", "If you want to pass you need to calculate the root of 73513476",
    "You cannot get in without killing me.... Oh you have a gun seems like you can go now", "If you want to pass you need to do 100 push ups",
        "Don't get in there otherwise you will have to confront me"};
    nbr = rand() % 5;
    std::cout << new_challenges[nbr] << std::endl;

}

std::ostream & operator<<(std::ostream &out, ScavTrap const &ct)
{
	out << "SC4V-TP " + ct.getName();
    return (out);
}
