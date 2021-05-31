#include "FragTrap.hpp"

FragTrap::FragTrap()
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
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->HitPoint = 100;
    this->MaxHitPoint = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->level = 1;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    std::cout << *this << " coming to life" << std::endl;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nbr;
    if (this->EnergyPoints < 25)
    {
        std::cout << *this << " Not enough energy to bambouzle " + target << std::endl;
        return;
    }
    std::string funny_attack[5] = {" Launch potato in order to make some mash off ", " Sings a love song in order to bore out ",
        " Forgot his weapon and found a chair to break on ", " Point his gun and shoots at ", " EXTEMINATES "};
    nbr = rand() % 5;
    std::cout << *this << funny_attack[nbr] + target << std::endl;
    this->EnergyPoints -= 25;
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor for " << *this << " being called" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    ClapTrap::meleeAttack(target);
}
std::ostream & operator<<(std::ostream &out, FragTrap const &ct)
{
	out << "FR4G-TP " + ct.getName();
    return (out);
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
    std::cout << "Assignation operator called on " << *this << std::endl;
    return (*this);
}

FragTrap::FragTrap(FragTrap const& to_copy) : ClapTrap(to_copy.name)
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
