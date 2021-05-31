#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->level = 1;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    std::cout << "DEFAULT constructor SC4V-TP being called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
 	this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 50;
    this->MaxEnergyPoints = 50;
    this->level = 1;
    this->MeleeAttackDamage = 20;
    this->RangedAttackDamage = 15;
    this->ArmorDamageReduction = 3;
	this->name = name;
    std::cout << "Constructor for SC4V-TP " + this->name + " being called" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " + this->name + " attacks " + target + " at range causing " << this->RangedAttackDamage << " Point of damage!" << std::endl;
}
void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " + this->name + " attacks " + target + " at range causing " << this->MeleeAttackDamage << " Point of damage!" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
    int hit_for;

    if (this->HitPoint - (int)amount + this->ArmorDamageReduction < 0)
        hit_for = this->HitPoint;
    else
        hit_for = amount - this->ArmorDamageReduction;
    this->HitPoint -= hit_for;
    std::cout << "FR4G-TP " + this->name + " lost " << hit_for << " hit points and has now (" << HP << ") HitPoint" << std::endl;
}


void ScavTrap::beRepaired(unsigned int amount)
{
    int repaired;
    if (this->HitPoint + amount > (unsigned int)this->MaxHitPoint)
        repaired = this->MaxHitPoint - this->HitPoint;
    else
        repaired = amount;
    this->HitPoint += repaired;
    std::cout << "FR4G-TP " + this->name + " is getting repaired for " << repaired <<  " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& to_copy)
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
    std::cout << "Copy constructor called on FR4G-TP " << this->name << std::endl;
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
    std::cout << "Assignation operator called on SC4V-TP " << this->name << std::endl;
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
