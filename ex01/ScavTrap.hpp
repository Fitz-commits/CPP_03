#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define HP GREEN << this->HitPoint << RESET

class ScavTrap
{
private:
	int HitPoint;
    int MaxHitPoint;
    int EnergyPoints;
    int MaxEnergyPoints;
    int level;
    std::string name;
    int MeleeAttackDamage;
    int RangedAttackDamage;
    int ArmorDamageReduction;
public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(ScavTrap const& to_copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const& to_copy);
	void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
};

#endif