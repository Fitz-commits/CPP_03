#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout <<  "DEFAULT constructor CL4P-TP being called"  << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout <<  "CLAP-TP " << this->getName() <<  " coming to life" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& to_copy)
{
	*this = to_copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& to_copy)
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
    std::cout << "Assignation operator called on " <<  "CLAP-TP " << this->getName() << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " <<  "CLAP-TP " << this->getName() << " being called" << std::endl;
}

std::ostream & operator<<(std::ostream &out, ClapTrap const &ct)
{
	out << "XXXX-TP " + ct.getName();
    return (out);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << *this <<  " attacks " + target + " at range causing " 
		<< this->RangedAttackDamage << " Point of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << *this << " attacks " + target + " at range causing "
	<< this->MeleeAttackDamage << " Point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int hit_for;

    if (this->HitPoint - (int)amount + this->ArmorDamageReduction < 0)
        hit_for = this->HitPoint;
    else
        hit_for = amount - this->ArmorDamageReduction;
    this->HitPoint -= hit_for;
    std::cout << *this << " lost " << hit_for << " hit points and has now (" << HP << ") HitPoint" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int repaired;
    if (this->HitPoint + (int)amount > this->MaxHitPoint)
        repaired = this->MaxHitPoint - this->HitPoint;
    else
        repaired = amount;
    this->HitPoint += repaired;
    std::cout << *this <<  " is getting repaired for " << repaired << " and has now (" << HP << ") HitPoint" << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->name;
}
