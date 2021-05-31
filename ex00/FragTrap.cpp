#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
    this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->level = 1;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    std::cout << "DEFAULT constructor FR4G-TP being called" << std::endl;
}
FragTrap::FragTrap(std::string name) : name(name)
{
    this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->level = 1;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    std::cout << "Constructor for FR4G-TP " + this->name + " being called" << std::endl;
}
void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " + this->name + " attacks " + target + " at range causing " << this->RangedAttackDamage << " Point of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " + this->name + " attacks " + target + " at range causing " << this->MeleeAttackDamage << " Point of damage!" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
    int hit_for;

    if (this->HitPoint - (int)amount + this->ArmorDamageReduction < 0)
        hit_for = this->HitPoint;
    else
        hit_for = amount - this->ArmorDamageReduction;
    this->HitPoint -= hit_for;
    std::cout << "FR4G-TP " + this->name + " lost " << hit_for << " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    int repaired;
    if (this->HitPoint + (int)amount > this->MaxHitPoint)
        repaired = this->MaxHitPoint - this->HitPoint;
    else
        repaired = amount;
    this->HitPoint += repaired;
    std::cout << "FR4G-TP " + this->name + " is getting repaired for " << repaired <<  " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nbr;
    if (this->EnergyPoints < 25)
    {
        std::cout << "FR4G-TP " + this->name + " Not enough energy to bambouzle " + target << std::endl;
        return;
    }
    std::string funny_attack[5] = {"Launch potato in order to make some mash off ", "Sings a love song in order to bore out ",
        "Forgot his weapon and found a chair to break on ", "Point his gun and shoots at ", "EXTEMINATES "};
    nbr = rand() % 5;
    std::cout << "FR4G-TP " + funny_attack[nbr] + target << std::endl;
    this->EnergyPoints -= 25;
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor for FR4G-TP " + this->name + " being called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& to_copy)
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
    std::cout << "Assignation operator called on FR4G-TP " << this->name << std::endl;
    return (*this);
}
FragTrap::FragTrap(FragTrap const& to_copy)
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
    std::cout << "Copy constructor called on " << "FR4G-TP " << this->name << std::endl;
}